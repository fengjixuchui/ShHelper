#ifndef _SHDRVINC_H_
#define _SHDRVINC_H_

#define TRACE_LOG 1
#define DEBUG_LOG 1

#define TRACE_OFF       0x0000
#define TRACE_ENTRY     0x0001
#define TRACE_UTIL      0x0002
#define TRACE_POOL      0x0004
#define TRACE_MEMORY    0x0008
#define TRACE_CORE      0x0010
#define TRACE_PE        0x0020
#define TRACE_ALL       0xFFFF

#define TRACE_LOG_DEPTH TRACE_ALL 

#define ASM_START _asm {
#define ASM_END   }
#define NOP nop;

#if TRACE_LOG
//#define TraceLog(...)  DbgPrintEx( DPFLTR_SYSTEM_ID,DPFLTR_ERROR_LEVEL, "[ShHelper_TRACE] => " __VA_ARGS__ )
#define TraceLog(func, file)  DbgPrintEx( DPFLTR_SYSTEM_ID,DPFLTR_ERROR_LEVEL, "[SH_TRACE] => %s (%s)\n", func, file)
#else
#define TraceLog(...)
#endif

#if DEBUG_LOG
#define Log(...)       DbgPrintEx( DPFLTR_SYSTEM_ID,DPFLTR_ERROR_LEVEL, "[SH_LOG] " __VA_ARGS__ ); PlainLog("\n");
#define ErrLog(...)    DbgPrintEx( DPFLTR_SYSTEM_ID, DPFLTR_ERROR_LEVEL, "[SH_ERR] " __VA_ARGS__ ); PlainLog("\n");
#define PlainLog(...)  DbgPrintEx( DPFLTR_SYSTEM_ID,DPFLTR_ERROR_LEVEL, __VA_ARGS__ )
#define DetailLog(...) DbgPrintEx( DPFLTR_SYSTEM_ID,DPFLTR_ERROR_LEVEL, "\t\t[*] " __VA_ARGS__ ); PlainLog("\n");
#define NtErrLog(Caller, Status) ErrLog("%s : 0x%X", Caller, Status)
#else
#define Log(...)
#define ErrLog(...)
#define PlainLog(...)
#define DetailLog(...)
#define NtErrLog(...)
#endif

#define ERROR_END NtErrLog(__FUNCTION__, Status); END
#define END goto FINISH;


#include <ntifs.h>
#include <ntimage.h>
#include <ntstrsafe.h>
#include <intrin.h>

#include <fltKernel.h>

#include <ShCommon.h>

#include <Enum/ShDrvUndocEnum.h>
#include <Enum/ShDrvEnum.h>

#include <Struct/ShDrvIntel.h>
#include <Struct/ShDrvUndocStruct.h>
#include <Struct/ShDrvFuncDef.h>
#include <Struct/ShDrvStruct.h>

#include <Memory/ShDrvMemory.h>

#include <Pe/ShDrvPe.h>

#include <Core/ShDrvCore.h>

#include <Util/ShDrvUtil.h>

#include <PoolManager/ShDrvPoolManager.h>

#include <ShDrvHelper.h>


#endif // !_SHDRVINC_H_
