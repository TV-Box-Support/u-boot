/* SPDX-License-Identifier: (GPL-2.0-only OR BSD-2-Clause) */
/*
 * Qualcomm SC7280 interconnect IDs
 *
 * Copyright (c) 2021, The Linux Foundation. All rights reserved.
 */

#ifndef __DT_BINDINGS_INTERCONNECT_QCOM_SC7280_H
#define __DT_BINDINGS_INTERCONNECT_QCOM_SC7280_H

#define MASTER_QSPI_0			0
#define MASTER_QUP_0			1
#define MASTER_QUP_1			2
#define MASTER_A1NOC_CFG			3
#define MASTER_PCIE_0			4
#define MASTER_PCIE_1			5
#define MASTER_SDCC_1			6
#define MASTER_SDCC_2			7
#define MASTER_SDCC_4			8
#define MASTER_UFS_MEM			9
#define MASTER_USB2			10
#define MASTER_USB3_0			11
#define SLAVE_A1NOC_SNOC			12
#define SLAVE_ANOC_PCIE_GEM_NOC			13
#define SLAVE_SERVICE_A1NOC			14

#define MASTER_QDSS_BAM			0
#define MASTER_A2NOC_CFG			1
#define MASTER_CNOC_A2NOC			2
#define MASTER_CRYPTO			3
#define MASTER_IPA			4
#define MASTER_QDSS_ETR			5
#define SLAVE_A2NOC_SNOC			6
#define SLAVE_SERVICE_A2NOC			7

#define MASTER_QUP_CORE_0			0
#define MASTER_QUP_CORE_1		1
#define SLAVE_QUP_CORE_0			2
#define SLAVE_QUP_CORE_1			3

#define MASTER_CNOC3_CNOC2			0
#define MASTER_QDSS_DAP			1
#define SLAVE_AHB2PHY_SOUTH			2
#define SLAVE_AHB2PHY_NORTH			3
#define SLAVE_CAMERA_CFG			4
#define SLAVE_CLK_CTL			5
#define SLAVE_CDSP_CFG			6
#define SLAVE_RBCPR_CX_CFG			7
#define SLAVE_RBCPR_MX_CFG			8
#define SLAVE_CRYPTO_0_CFG			9
#define SLAVE_CX_RDPM			10
#define SLAVE_DCC_CFG			11
#define SLAVE_DISPLAY_CFG			12
#define SLAVE_GFX3D_CFG			13
#define SLAVE_HWKM			14
#define SLAVE_IMEM_CFG			15
#define SLAVE_IPA_CFG			16
#define SLAVE_IPC_ROUTER_CFG			17
#define SLAVE_LPASS			18
#define SLAVE_CNOC_MSS			19
#define SLAVE_MX_RDPM			20
#define SLAVE_PCIE_0_CFG			21
#define SLAVE_PCIE_1_CFG			22
#define SLAVE_PDM			23
#define SLAVE_PIMEM_CFG			24
#define SLAVE_PKA_WRAPPER_CFG			25
#define SLAVE_PMU_WRAPPER_CFG			26
#define SLAVE_QDSS_CFG			27
#define SLAVE_QSPI_0			28
#define SLAVE_QUP_0			29
#define SLAVE_QUP_1			30
#define SLAVE_SDCC_1			31
#define SLAVE_SDCC_2			32
#define SLAVE_SDCC_4			33
#define SLAVE_SECURITY			34
#define SLAVE_TCSR			35
#define SLAVE_TLMM			36
#define SLAVE_UFS_MEM_CFG			37
#define SLAVE_USB2			38
#define SLAVE_USB3_0			39
#define SLAVE_VENUS_CFG			40
#define SLAVE_VSENSE_CTRL_CFG			41
#define SLAVE_A1NOC_CFG			42
#define SLAVE_A2NOC_CFG			43
#define SLAVE_CNOC2_CNOC3			44
#define SLAVE_CNOC_MNOC_CFG			45
#define SLAVE_SNOC_CFG			46

#define MASTER_CNOC2_CNOC3			0
#define MASTER_GEM_NOC_CNOC			1
#define MASTER_GEM_NOC_PCIE_SNOC			2
#define SLAVE_AOSS			3
#define SLAVE_APPSS			4
#define SLAVE_CNOC3_CNOC2			5
#define SLAVE_CNOC_A2NOC			6
#define SLAVE_DDRSS_CFG			7
#define SLAVE_BOOT_IMEM			8
#define SLAVE_IMEM			9
#define SLAVE_PIMEM			10
#define SLAVE_PCIE_0			11
#define SLAVE_PCIE_1			12
#define SLAVE_QDSS_STM			13
#define SLAVE_TCU			14

#define MASTER_CNOC_DC_NOC			0
#define SLAVE_LLCC_CFG			1
#define SLAVE_GEM_NOC_CFG			2

#define MASTER_GPU_TCU			0
#define MASTER_SYS_TCU			1
#define MASTER_APPSS_PROC			2
#define MASTER_COMPUTE_NOC			3
#define MASTER_GEM_NOC_CFG			4
#define MASTER_GFX3D			5
#define MASTER_MNOC_HF_MEM_NOC			6
#define MASTER_MNOC_SF_MEM_NOC			7
#define MASTER_ANOC_PCIE_GEM_NOC			8
#define MASTER_SNOC_GC_MEM_NOC			9
#define MASTER_SNOC_SF_MEM_NOC			10
#define SLAVE_MSS_PROC_MS_MPU_CFG			11
#define SLAVE_MCDMA_MS_MPU_CFG			12
#define SLAVE_GEM_NOC_CNOC			13
#define SLAVE_LLCC			14
#define SLAVE_MEM_NOC_PCIE_SNOC			15
#define SLAVE_SERVICE_GEM_NOC_1			16
#define SLAVE_SERVICE_GEM_NOC_2			17
#define SLAVE_SERVICE_GEM_NOC			18

#define MASTER_CNOC_LPASS_AG_NOC			0
#define SLAVE_LPASS_CORE_CFG			1
#define SLAVE_LPASS_LPI_CFG			2
#define SLAVE_LPASS_MPU_CFG			3
#define SLAVE_LPASS_TOP_CFG			4
#define SLAVE_SERVICES_LPASS_AML_NOC			5
#define SLAVE_SERVICE_LPASS_AG_NOC			6

#define MASTER_LLCC			0
#define SLAVE_EBI1			1

#define MASTER_CNOC_MNOC_CFG			0
#define MASTER_VIDEO_P0			1
#define MASTER_VIDEO_PROC			2
#define MASTER_CAMNOC_HF			3
#define MASTER_CAMNOC_ICP			4
#define MASTER_CAMNOC_SF			5
#define MASTER_MDP0			6
#define SLAVE_MNOC_HF_MEM_NOC			7
#define SLAVE_MNOC_SF_MEM_NOC			8
#define SLAVE_SERVICE_MNOC			9

#define MASTER_CDSP_NOC_CFG			0
#define MASTER_CDSP_PROC			1
#define SLAVE_CDSP_MEM_NOC			2
#define SLAVE_SERVICE_NSP_NOC			3

#define MASTER_A1NOC_SNOC			0
#define MASTER_A2NOC_SNOC			1
#define MASTER_SNOC_CFG			2
#define MASTER_PIMEM			3
#define MASTER_GIC			4
#define SLAVE_SNOC_GEM_NOC_GC			5
#define SLAVE_SNOC_GEM_NOC_SF			6
#define SLAVE_SERVICE_SNOC			7

#endif