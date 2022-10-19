#!/bin/bash

sudo rmmod nvidia_drm
sudo rmmod nvidia_uvm 
sudo rmmod nvidia_modeset 
sudo rmmod nvidia

make clean;sudo make modules -j$(nproc) NV_VERBOSE=1
#sudo BUILD_EXCLUSIVE_KERNEL=$(uname -r) IGNORE_PREEMPT_RT_PRESENCE=1 make modules -j$(nproc) NV_VERBOSE=1

sudo make -C kernel-open modules_install
#sudo BUILD_EXCLUSIVE_KERNEL=$(uname -r) IGNORE_PREEMPT_RT_PRESENCE=1 make modules_install -j$(nproc)

sudo depmod -a; update-initramfs -u
#sudo init q

#sudo insmod /lib/modules/5.15.0-50-generic/kernel/drivers/video/nvidia.ko
#sudo insmod /lib/modules/5.15.0-50-generic/kernel/drivers/video/nvidia-modeset.ko
#sudo insmod /lib/modules/5.15.0-50-generic/kernel/drivers/video/nvidia-uvm.ko
#sudo insmod /lib/modules/5.15.0-50-generic/kernel/drivers/video/nvidia-drm.ko

#nvidia-smi
#sudo dmesg
