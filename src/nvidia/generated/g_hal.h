// This file is automatically generated by rmconfig - DO NOT EDIT!
//
// HAL support for use in HAL setup
//
// Profile:  shipping-gpus-openrm
// Template: templates/gt_hal.h
//

#ifndef _G_RMCFG_HAL_H_
#define _G_RMCFG_HAL_H_


typedef struct DISP_HAL_IFACES    *PDISP_HAL_IFACES;
typedef struct DPU_HAL_IFACES     *PDPU_HAL_IFACES;
typedef struct GPIO_HAL_IFACES    *PGPIO_HAL_IFACES;
typedef struct RPC_HAL_IFACES     *PRPC_HAL_IFACES;
typedef struct RPCSTRUCTURECOPY_HAL_IFACES *PRPCSTRUCTURECOPY_HAL_IFACES;



//
// per-GPU list of function ptrs to setup iface for each engine
//

typedef struct {

    void (*rpcHalIfacesSetupFn)(PRPC_HAL_IFACES pRpcHal);

} HAL_IFACE_SETUP, *PHAL_IFACE_SETUP;



//
// IP_VERSIONS support
//

typedef struct IGRP_IP_VERSIONS_TABLE_INFO IGRP_IP_VERSIONS_TABLE_INFO;

// generic form of Head_iGrp_ipVersions_getInfo typedef

typedef NV_STATUS  IGrp_ipVersions_getInfo(IGRP_IP_VERSIONS_TABLE_INFO *);
typedef void      IGrp_ipVersions_install(IGRP_IP_VERSIONS_TABLE_INFO *);
typedef NV_STATUS  IGrp_ipVersions_wrapup(IGRP_IP_VERSIONS_TABLE_INFO *);

// a single inclusive version range
typedef struct {
    NvU32  v0;
    NvU32  v1;
} IGRP_IP_VERSION_RANGE;


typedef struct {
    const IGRP_IP_VERSION_RANGE   *pRanges;
    NvU32                          numRanges;
    IGrp_ipVersions_install       *ifacesInstallFn;
} IGRP_IP_VERSIONS_ENTRY;


struct IGRP_IP_VERSIONS_TABLE_INFO {
    POBJGPU                       pGpu;
    Dynamic                      *pDynamic;             // eg: pBiff

    const IGRP_IP_VERSIONS_ENTRY *pTable;
    NvU32                         numEntries;
    IGrp_ipVersions_wrapup       *ifacesWrapupFn;       // overrides and asserts
};

// HAL_IMPLEMENTATION enum
typedef enum
{
    HAL_IMPL_GF100,
    HAL_IMPL_GF100B,
    HAL_IMPL_GF104,
    HAL_IMPL_GF104B,
    HAL_IMPL_GF106,
    HAL_IMPL_GF106B,
    HAL_IMPL_GF108,
    HAL_IMPL_GF110D,
    HAL_IMPL_GF110,
    HAL_IMPL_GF117,
    HAL_IMPL_GF118,
    HAL_IMPL_GF119,
    HAL_IMPL_GF110F,
    HAL_IMPL_GF110F2,
    HAL_IMPL_GF110F3,
    HAL_IMPL_GK104,
    HAL_IMPL_GK106,
    HAL_IMPL_GK107,
    HAL_IMPL_GK20A,
    HAL_IMPL_GK110,
    HAL_IMPL_GK110B,
    HAL_IMPL_GK110C,
    HAL_IMPL_GK208,
    HAL_IMPL_GK208S,
    HAL_IMPL_GM107,
    HAL_IMPL_GM108,
    HAL_IMPL_GM200,
    HAL_IMPL_GM204,
    HAL_IMPL_GM206,
    HAL_IMPL_GP100,
    HAL_IMPL_GP102,
    HAL_IMPL_GP104,
    HAL_IMPL_GP106,
    HAL_IMPL_GP107,
    HAL_IMPL_GP108,
    HAL_IMPL_GV100,
    HAL_IMPL_GV11B,
    HAL_IMPL_TU102,
    HAL_IMPL_TU104,
    HAL_IMPL_TU106,
    HAL_IMPL_TU116,
    HAL_IMPL_TU117,
    HAL_IMPL_GA100,
    HAL_IMPL_GA102,
    HAL_IMPL_GA103,
    HAL_IMPL_GA104,
    HAL_IMPL_GA106,
    HAL_IMPL_GA107,
    HAL_IMPL_GA10B,
    HAL_IMPL_GA102F,
    HAL_IMPL_T001_FERMI_NOT_EXIST,
    HAL_IMPL_T124,
    HAL_IMPL_T132,
    HAL_IMPL_T210,
    HAL_IMPL_T186,
    HAL_IMPL_T194,
    HAL_IMPL_T002_TURING_NOT_EXIST,
    HAL_IMPL_T234,
    HAL_IMPL_T234D,
    HAL_IMPL_AMODEL,

    HAL_IMPL_MAXIMUM,       // NOTE: this symbol must be at the end of the enum list.
                            // It is used to allocate arrays and control loop iterations.
} HAL_IMPLEMENTATION;

//
// HAL implementation names for debug & logging use
//
#define HAL_IMPL_NAME_LIST \
    { HAL_IMPL_TU102, "TU102" }, \
    { HAL_IMPL_TU104, "TU104" }, \
    { HAL_IMPL_TU106, "TU106" }, \
    { HAL_IMPL_TU116, "TU116" }, \
    { HAL_IMPL_TU117, "TU117" }, \
    { HAL_IMPL_GA100, "GA100" }, \
    { HAL_IMPL_GA102, "GA102" }, \
    { HAL_IMPL_GA103, "GA103" }, \
    { HAL_IMPL_GA104, "GA104" }, \
    { HAL_IMPL_GA106, "GA106" }, \
    { HAL_IMPL_GA107, "GA107" }


#endif  // _G_RMCFG_HAL_H_
