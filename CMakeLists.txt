set(TARGET sm_61)

# TODO: Which version do we want?
cmake_minimum_required(VERSION 3.8 FATAL_ERROR)

# project(fractional_gpu VERSION 1.0.1 LANGUAGES CXX CUDA DESCRIPTION "Split GPU into Fractional GPUs")
project(fractional_gpu VERSION 1.0.1 LANGUAGES CXX DESCRIPTION "Split GPU into Fractional GPUs")

# Include the file contanining CMake options
include(config.cmake.in)

# Check for contraints on configurations

# For memory coloring, computational coloring is a must
if(FGPU_MEM_COLORING_ENABLED AND NOT FGPU_COMP_COLORING_ENABLE)
    message(FATAL_ERROR "FGPU_COMP_COLORING_ENABLE not defined")
endif()

# When userspace/test coloring is enabled, coloring must be enabled
if((FGPU_USER_MEM_COLORING_ENABLED AND NOT FGPU_MEM_COLORING_ENABLED) OR 
	(FGPU_TEST_MEM_COLORING_ENABLED AND NOT FGPU_MEM_COLORING_ENABLED))
    message(FATAL_ERROR "FGPU_MEM_COLORING_ENABLED not defined")
endif()

# Only one can be selected at a time
if(FGPU_USER_MEM_COLORING_ENABLED AND FGPU_TEST_MEM_COLORING_ENABLED)
    message(FATAL_ERROR "Both FGPU_USER_MEM_COLORING_ENABLED and FGPU_TEST_MEM_COLORING_ENABLED defined")
endif()


# Equivalent variables for kernel driver
if(FGPU_MEM_COLORING_ENABLED)
    set(UVM_MEM_COLORING 1)
endif()

if(FGPU_USER_MEM_COLORING_ENABLED)
    set(UVM_USER_MEM_COLORING 1)
endif()

if(FGPU_TEST_MEM_COLORING_ENABLED)
    set(UVM_TEST_MEM_COLORING 1)
endif()

# Set configuration variables for FGPU source code
configure_file(include/fgpu_internal_build_config.hpp.in            
    "${PROJECT_SOURCE_DIR}/include/fgpu_internal_build_config.hpp")

# Set configuration variables for Kernel driver source code
configure_file(driver/NVIDIA-Linux-x86_64-390.48/kernel/common/inc/uvm_config.h.in            
    "${PROJECT_SOURCE_DIR}/driver/NVIDIA-Linux-x86_64-390.48/kernel/common/inc/uvm_config.h")

# Configure the build type
#set(CMAKE_BUILD_TYPE Debug)
#set(CMAKE_BUILD_TYPE RelWithDebInfo)
set(CMAKE_BUILD_TYPE Release)


# find_package(CUDA  REQUIRED)
# include_directories("${CUDA_INCLUDE_DIRS}")
include_directories(include)
# include_directories(programs/cuda_samples/common/inc)
include_directories(driver/NVIDIA-Linux-x86_64-390.48/kernel/nvidia-uvm/)
include_directories(driver/NVIDIA-Linux-x86_64-390.48/kernel/common/inc/)

# string(APPEND CMAKE_CUDA_FLAGS " -m 64 -arch=${TARGET}")
string(APPEND " -m 64 -arch=${TARGET}")

# Add programs to be built _without_ using persistent threads model
# First arg is target name
# Second arg is include directory
# Rest of the args are the files to be compiled into target
function(add_native_target target include_dir)

    add_executable(${target} ${ARGN})
    target_compile_features(${target} PUBLIC cxx_std_11)
    target_include_directories(${target}  PUBLIC ${include_dir})

endfunction(add_native_target)

# Library
add_library(fractional_gpu SHARED
    persistent/allocator.cpp
)
set_property(TARGET fractional_gpu PROPERTY VERSION ${PROJECT_VERSION})
set_property(TARGET fractional_gpu PROPERTY PUBLIC_HEADER
	include/fractional_gpu.h)
target_include_directories(fractional_gpu PRIVATE include)
target_compile_features(fractional_gpu PUBLIC cxx_std_11)
target_link_libraries(fractional_gpu nvidia-ml)
