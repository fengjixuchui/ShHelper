#ifndef _SHDRVUNDOCENUM_H_
#define _SHDRVUNDOCENUM_H_

/**
 * @file ShDrvUndocEnum.h
 * @author Shh0ya (hunho88@gmail.com)
 * @brief undocumented enumeration
 * @date 2022-12-30
 * @copyright the GNU General Public License v3
 */

namespace UNDOC_ENUM {

	//======================================================
	// System Information Class
	//======================================================
	typedef enum _SYSTEM_INFORMATION_CLASS {
		SystemBasicInformation = 0,
		SystemProcessorInformation = 1,
		SystemPerformanceInformation = 2,
		SystemTimeOfDayInformation = 3,
		SystemPathInformation = 4,
		SystemProcessInformation = 5,
		SystemCallCountInformation = 6,
		SystemDeviceInformation = 7,
		SystemProcessorPerformanceInformation = 8,
		SystemFlagsInformation = 9,
		SystemCallTimeInformation = 10,
		SystemModuleInformation = 11,
		SystemLocksInformation = 12,
		SystemStackTraceInformation = 13,
		SystemPagedPoolInformation = 14,
		SystemNonPagedPoolInformation = 15,
		SystemHandleInformation = 16,
		SystemObjectInformation = 17,
		SystemPageFileInformation = 18,
		SystemVdmInstemulInformation = 19,
		SystemVdmBopInformation = 20,
		SystemFileCacheInformation = 21,
		SystemPoolTagInformation = 22,
		SystemInterruptInformation = 23,
		SystemDpcBehaviorInformation = 24,
		SystemFullMemoryInformation = 25,
		SystemLoadGdiDriverInformation = 26,
		SystemUnloadGdiDriverInformation = 27,
		SystemTimeAdjustmentInformation = 28,
		SystemSummaryMemoryInformation = 29,
		SystemMirrorMemoryInformation = 30,
		SystemPerformanceTraceInformation = 31,
		SystemObsolete0 = 32,
		SystemExceptionInformation = 33,
		SystemCrashDumpStateInformation = 34,
		SystemKernelDebuggerInformation = 35,
		SystemContextSwitchInformation = 36,
		SystemRegistryQuotaInformation = 37,
		SystemExtendServiceTableInformation = 38,
		SystemPrioritySeperation = 39,
		SystemVerifierAddDriverInformation = 40,
		SystemVerifierRemoveDriverInformation = 41,
		SystemProcessorIdleInformation = 42,
		SystemLegacyDriverInformation = 43,
		SystemCurrentTimeZoneInformation = 44,
		SystemLookasideInformation = 45,
		SystemTimeSlipNotification = 46,
		SystemSessionCreate = 47,
		SystemSessionDetach = 48,
		SystemSessionInformation = 49,
		SystemRangeStartInformation = 50,
		SystemVerifierInformation = 51,
		SystemVerifierThunkExtend = 52,
		SystemSessionProcessInformation = 53,
		SystemLoadGdiDriverInSystemSpace = 54,
		SystemNumaProcessorMap = 55,
		SystemPrefetcherInformation = 56,
		SystemExtendedProcessInformation = 57,
		SystemRecommendedSharedDataAlignment = 58,
		SystemComPlusPackage = 59,
		SystemNumaAvailableMemory = 60,
		SystemProcessorPowerInformation = 61,
		SystemEmulationBasicInformation = 62,
		SystemEmulationProcessorInformation = 63,
		SystemExtendedHandleInformation = 64,
		SystemLostDelayedWriteInformation = 65,
		SystemBigPoolInformation = 66,
		SystemSessionPoolTagInformation = 67,
		SystemSessionMappedViewInformation = 68,
		SystemHotpatchInformation = 69,
		SystemObjectSecurityMode = 70,
		SystemWatchdogTimerHandler = 71,
		SystemWatchdogTimerInformation = 72,
		SystemLogicalProcessorInformation = 73,
		SystemWow64SharedInformationObsolete = 74,
		SystemRegisterFirmwareTableInformationHandler = 75,
		SystemFirmwareTableInformation = 76,
		SystemModuleInformationEx = 77,
		SystemVerifierTriageInformation = 78,
		SystemSuperfetchInformation = 79,
		SystemMemoryListInformation = 80,
		SystemFileCacheInformationEx = 81,
		SystemThreadPriorityClientIdInformation = 82,
		SystemProcessorIdleCycleTimeInformation = 83,
		SystemVerifierCancellationInformation = 84,
		SystemProcessorPowerInformationEx = 85,
		SystemRefTraceInformation = 86,
		SystemSpecialPoolInformation = 87,
		SystemProcessIdInformation = 88,
		SystemErrorPortInformation = 89,
		SystemBootEnvironmentInformation = 90,
		SystemHypervisorInformation = 91,
		SystemVerifierInformationEx = 92,
		SystemTimeZoneInformation = 93,
		SystemImageFileExecutionOptionsInformation = 94,
		SystemCoverageInformation = 95,
		SystemPrefetchPatchInformation = 96,
		SystemVerifierFaultsInformation = 97,
		SystemSystemPartitionInformation = 98,
		SystemSystemDiskInformation = 99,
		SystemProcessorPerformanceDistribution = 100,
		SystemNumaProximityNodeInformation = 101,
		SystemDynamicTimeZoneInformation = 102,
		SystemCodeIntegrityInformation = 103,
		SystemProcessorMicrocodeUpdateInformation = 104,
		SystemProcessorBrandString = 105,
		SystemVirtualAddressInformation = 106,
		SystemLogicalProcessorAndGroupInformation = 107,
		SystemProcessorCycleTimeInformation = 108,
		SystemStoreInformation = 109,
		SystemRegistryAppendString = 110,
		SystemAitSamplingValue = 111,
		SystemVhdBootInformation = 112,
		SystemCpuQuotaInformation = 113,
		SystemNativeBasicInformation = 114,
		SystemErrorPortTimeouts = 115,
		SystemLowPriorityIoInformation = 116,
		SystemBootEntropyInformation = 117,
		SystemVerifierCountersInformation = 118,
		SystemPagedPoolInformationEx = 119,
		SystemSystemPtesInformationEx = 120,
		SystemNodeDistanceInformation = 121,
		SystemAcpiAuditInformation = 122,
		SystemBasicPerformanceInformation = 123,
		SystemQueryPerformanceCounterInformation = 124,
		SystemSessionBigPoolInformation = 125,
		SystemBootGraphicsInformation = 126,
		SystemScrubPhysicalMemoryInformation = 127,
		SystemBadPageInformation = 128,
		SystemProcessorProfileControlArea = 129,
		SystemCombinePhysicalMemoryInformation = 130,
		SystemEntropyInterruptTimingInformation = 131,
		SystemConsoleInformation = 132,
		SystemPlatformBinaryInformation = 133,
		SystemPolicyInformation = 134,
		SystemHypervisorProcessorCountInformation = 135,
		SystemDeviceDataInformation = 136,
		SystemDeviceDataEnumerationInformation = 137,
		SystemMemoryTopologyInformation = 138,
		SystemMemoryChannelInformation = 139,
		SystemBootLogoInformation = 140,
		SystemProcessorPerformanceInformationEx = 141,
		SystemCriticalProcessErrorLogInformation = 142,
		SystemSecureBootPolicyInformation = 143,
		SystemPageFileInformationEx = 144,
		SystemSecureBootInformation = 145,
		SystemEntropyInterruptTimingRawInformation = 146,
		SystemPortableWorkspaceEfiLauncherInformation = 147,
		SystemFullProcessInformation = 148,
		SystemKernelDebuggerInformationEx = 149,
		SystemBootMetadataInformation = 150,
		SystemSoftRebootInformation = 151,
		SystemElamCertificateInformation = 152,
		SystemOfflineDumpConfigInformation = 153,
		SystemProcessorFeaturesInformation = 154,
		SystemRegistryReconciliationInformation = 155,
		SystemEdidInformation = 156,
		SystemManufacturingInformation = 157,
		SystemEnergyEstimationConfigInformation = 158,
		SystemHypervisorDetailInformation = 159,
		SystemProcessorCycleStatsInformation = 160,
		SystemVmGenerationCountInformation = 161,
		SystemTrustedPlatformModuleInformation = 162,
		SystemKernelDebuggerFlags = 163,
		SystemCodeIntegrityPolicyInformation = 164,
		SystemIsolatedUserModeInformation = 165,
		SystemHardwareSecurityTestInterfaceResultsInformation = 166,
		SystemSingleModuleInformation = 167,
		SystemAllowedCpuSetsInformation = 168,
		SystemVsmProtectionInformation = 169,
		SystemInterruptCpuSetsInformation = 170,
		SystemSecureBootPolicyFullInformation = 171,
		SystemCodeIntegrityPolicyFullInformation = 172,
		SystemAffinitizedInterruptProcessorInformation = 173,
		SystemRootSiloInformation = 174,
		SystemCpuSetInformation = 175,
		SystemCpuSetTagInformation = 176,
		SystemWin32WerStartCallout = 177,
		SystemSecureKernelProfileInformation = 178,
		SystemCodeIntegrityPlatformManifestInformation = 179,
		SystemInterruptSteeringInformation = 180,
		SystemSupportedProcessorArchitectures = 181,
		SystemMemoryUsageInformation = 182,
		SystemCodeIntegrityCertificateInformation = 183,
		SystemPhysicalMemoryInformation = 184,
		SystemControlFlowTransition = 185,
		SystemKernelDebuggingAllowed = 186,
		SystemActivityModerationExeState = 187,
		SystemActivityModerationUserSettings = 188,
		SystemCodeIntegrityPoliciesFullInformation = 189,
		SystemCodeIntegrityUnlockInformation = 190,
		SystemIntegrityQuotaInformation = 191,
		SystemFlushInformation = 192,
		SystemProcessorIdleMaskInformation = 193,
		SystemSecureDumpEncryptionInformation = 194,
		SystemWriteConstraintInformation = 195,
		SystemKernelVaShadowInformation = 196,
		SystemHypervisorSharedPageInformation = 197,
		SystemFirmwareBootPerformanceInformation = 198,
		SystemCodeIntegrityVerificationInformation = 199,
		SystemFirmwarePartitionInformation = 200,
		SystemSpeculationControlInformation = 201,
		SystemDmaGuardPolicyInformation = 202,
		SystemEnclaveLaunchControlInformation = 203,
		SystemWorkloadAllowedCpuSetsInformation = 204,
		SystemCodeIntegrityUnlockModeInformation = 205,
		SystemLeapSecondInformation = 206,
		SystemFlags2Information = 207,
		SystemSecurityModelInformation = 208,
		SystemCodeIntegritySyntheticCacheInformation = 209,
		SystemFeatureConfigurationInformation = 210,
		SystemFeatureConfigurationSectionInformation = 211,
		SystemFeatureUsageSubscriptionInformation = 212,
		SystemSecureSpeculationControlInformation = 213,
		SystemSpacesBootInformation = 214,
		SystemFwRamdiskInformation = 215,
		SystemWheaIpmiHardwareInformation = 216,
		SystemDifSetRuleClassInformation = 217,
		SystemDifClearRuleClassInformation = 218,
		SystemDifApplyPluginVerificationOnDriver = 219,
		SystemDifRemovePluginVerificationOnDriver = 220,
		SystemShadowStackInformation = 221,
		SystemBuildVersionInformation = 222,
		SystemPoolLimitInformation = 223,
		SystemCodeIntegrityAddDynamicStore = 224,
		SystemCodeIntegrityClearDynamicStores = 225,
		SystemPoolZeroingInformation = 227,
		MaxSystemInfoClass = 228
	}SYSTEM_INFORMATION_CLASS;

	//======================================================
	// Process Information Class
	//======================================================
	typedef enum _PROCESS_INFORMATION_CLASS {
		ProcessBasicInformation,
		ProcessQuotaLimits,
		ProcessIoCounters,
		ProcessVmCounters,
		ProcessTimes,
		ProcessBasePriority,
		ProcessRaisePriority,
		ProcessDebugPort,
		ProcessExceptionPort,
		ProcessAccessToken,
		ProcessLdtInformation,
		ProcessLdtSize,
		ProcessDefaultHardErrorMode,
		ProcessIoPortHandlers,
		ProcessPooledUsageAndLimits,
		ProcessWorkingSetWatch,
		ProcessUserModeIOPL,
		ProcessEnableAlignmentFaultFixup,
		ProcessPriorityClass,
		ProcessWx86Information,
		ProcessHandleCount,
		ProcessAffinityMask,
		ProcessPriorityBoost,
		MaxProcessInfoClass
	} PROCESS_INFORMATION_CLASS, * PPROCESS_INFORMATION_CLASS;

	//======================================================
	// Thread Information Class
	//======================================================
	typedef enum _THREAD_INFORMATION_CLASS {
		ThreadBasicInformation,
		ThreadTimes,
		ThreadPriority,
		ThreadBasePriority,
		ThreadAffinityMask,
		ThreadImpersonationToken,
		ThreadDescriptorTableEntry,
		ThreadEnableAlignmentFaultFixup,
		ThreadEventPair_Reusable,
		ThreadQuerySetWin32StartAddress,
		ThreadZeroTlsCell,
		ThreadPerformanceCount,
		ThreadAmILastThread,
		ThreadIdealProcessor,
		ThreadPriorityBoost,
		ThreadSetTlsArrayAddress,
		ThreadIsIoPending,
		ThreadHideFromDebugger,
		ThreadBreakOnTermination,
		ThreadSwitchLegacyState,
		ThreadIsTerminated,
		ThreadLastSystemCall,
		ThreadIoPriority,
		ThreadCycleTime,
		ThreadPagePriority,
		ThreadActualBasePriority,
		ThreadTebInformation,
		ThreadCSwitchMon,
		ThreadCSwitchPmu,
		ThreadWow64Context,
		ThreadGroupInformation,
		ThreadUmsInformation,
		ThreadCounterProfiling,
		ThreadIdealProcessorEx,
		ThreadCpuAccountingInformation,
		ThreadSuspendCount,
		ThreadHeterogeneousCpuPolicy,
		ThreadContainerId,
		ThreadNameInformation,
		ThreadSelectedCpuSets,
		ThreadSystemThreadInformation,
		ThreadActualGroupAffinity,
		MaxThreadInfoClass
	}THREAD_INFORMATION_CLASS, *PTHREAD_INFORMATION_CLASS;

	//======================================================
	// Memory Information Class
	//======================================================
	typedef enum _REDEF_MEMORY_INFORMATION_CLASS
	{
		MemoryBasicInformation_ = 0, // MEMORY_BASIC_INFORMATION
		MemoryWorkingSetInformation, // MEMORY_WORKING_SET_INFORMATION
		MemoryMappedFilenameInformation, // UNICODE_STRING
		MemoryRegionInformation, // MEMORY_REGION_INFORMATION
		MemoryWorkingSetExInformation, // MEMORY_WORKING_SET_EX_INFORMATION // since VISTA
		MemorySharedCommitInformation, // MEMORY_SHARED_COMMIT_INFORMATION // since WIN8
		MemoryImageInformation, // MEMORY_IMAGE_INFORMATION
		MemoryRegionInformationEx, // MEMORY_REGION_INFORMATION
		MemoryPrivilegedBasicInformation,
		MemoryEnclaveImageInformation, // MEMORY_ENCLAVE_IMAGE_INFORMATION // since REDSTONE3
		MemoryBasicInformationCapped, // 10
		MemoryPhysicalContiguityInformation, // MEMORY_PHYSICAL_CONTIGUITY_INFORMATION // since 20H1
		MemoryBadInformation, // since WIN11
		MemoryBadInformationAllProcesses, // since 22H1
		MaxMemoryInfoClass
	} REDEF_MEMORY_INFORMATION_CLASS, *PREDEF_MEMORY_INFORMATION_CLASS;

	//======================================================
	// Virtual Memory Information Class
	//======================================================
	typedef enum _REDEF_VIRTUAL_MEMORY_INFORMAITION_CLASS
	{
		VmPrefetchInformation_ = 0, // ULONG
		VmPagePriorityInformation, // OFFER_PRIORITY
		VmCfgCallTargetInformation, // CFG_CALL_TARGET_LIST_INFORMATION // REDSTONE2
		VmPageDirtyStateInformation, // REDSTONE3
		VmImageHotPatchInformation, // 19H1
		VmPhysicalContiguityInformation, // 20H1
		VmVirtualMachinePrepopulateInformation,
		VmRemoveFromWorkingSetInformation,
		MaxVmInfoClass
	} REDEF_VIRTUAL_MEMORY_INFORMAITION_CLASS, *PREDEF_VIRTUAL_MEMORY_INFORMAITION_CLASS;

	//======================================================
	// APC environment
	//======================================================
	typedef enum _KAPC_ENVIRONMENT
	{
		OriginalApcEnvironment,
		AttachedApcEnvironment,
		CurrentApcEnvironment,
		InsertApcEnvironment
	}KAPC_ENVIRONMENT, * PKAPC_ENVIRONMENT;

	//======================================================
	// DBG Command
	//======================================================
	typedef enum _SYSDBG_COMMAND {
		SysDbgQueryModuleInformation = 0,
		SysDbgQueryTraceInformation = 1,
		SysDbgSetTracepoint = 2,
		SysDbgSetSpecialCall = 3,
		SysDbgClearSpecialCalls = 4,
		SysDbgQuerySpecialCalls = 5,
		SysDbgBreakPoint = 6,
		SysDbgQueryVersion = 7,
		SysDbgReadVirtual = 8,
		SysDbgWriteVirtual = 9,
		SysDbgReadPhysical = 10,
		SysDbgWritePhysical = 11,
		SysDbgReadControlSpace = 12,
		SysDbgWriteControlSpace = 13,
		SysDbgReadIoSpace = 14,
		SysDbgWriteIoSpace = 15,
		SysDbgReadMsr = 16,
		SysDbgWriteMsr = 17,
		SysDbgReadBusData = 18,
		SysDbgWriteBusData = 19,
		SysDbgCheckLowMemory = 20,
		SysDbgEnableKernelDebugger = 21,
		SysDbgDisableKernelDebugger = 22,
		SysDbgGetAutoKdEnable = 23,
		SysDbgSetAutoKdEnable = 24,
		SysDbgGetPrintBufferSize = 25,
		SysDbgSetPrintBufferSize = 26,
		SysDbgGetKdUmExceptionEnable = 27,
		SysDbgSetKdUmExceptionEnable = 28,
		SysDbgGetTriageDump = 29,
		SysDbgGetKdBlockEnable = 30,
		SysDbgSetKdBlockEnable = 31,
		SysDbgRegisterForUmBreakInfo = 32,
		SysDbgGetUmBreakPid = 33,
		SysDbgClearUmBreakPid = 34,
		SysDbgGetUmAttachPid = 35,
		SysDbgClearUmAttachPid = 36,
	}SYSDBG_COMMAND, * PSYSDBG_COMMAND;
}

#endif // !_SHDRVUNDOCENUM_H_
