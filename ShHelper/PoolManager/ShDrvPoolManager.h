#ifndef _SHDRVPOOLMANAGER_H_
#define _SHDRVPOOLMANAGER_H_

#define STR_MAX_LENGTH 260 

#define ALLOC_POOL(Type) ShDrvPoolManager::GetPool(Type)
#define FREE_POOL(ptr)   ShDrvPoolManager::FreePoolEntry(ptr)

#define GET_GLOBAL_POOL(ptr, type)\
ptr = reinterpret_cast<PSH_##type>(ShDrvPoolManager::GetPool(type));\
if(ptr == nullptr) { Status = STATUS_UNSUCCESSFUL; END }

namespace ShDrvPoolManager {
	NTSTATUS Initialize();
	NTSTATUS AllocatePoolEntry(IN SH_POOL_TYPE PoolType, IN ULONG PoolSize);
	NTSTATUS FreePoolEntry(IN PVOID Buffer, IN BOOLEAN bReuse = false);

	PVOID    GetPool(IN SH_POOL_TYPE PoolType);

	VOID     Finalize();
}

#endif // !_SHDRVPOOLMANAGER_H_
