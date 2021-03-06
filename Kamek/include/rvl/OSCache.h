/*
    This header file defines the most common high level cache operations.
    For finer grain control over the caches, use OSDC.h, OSIC.h, and OSLC.h
    for data cache, instruction cache, and locked cache routines respectively.
 */

#ifndef __OSCACHE_H__
#define __OSCACHE_H__

/*#include <revolution/types.h>
#include <revolution/os/OSDC.h>
#include <revolution/os/OSIC.h>
#include <revolution/os/OSL2.h>
#include <revolution/os/OSLC.h>*/

#ifdef __cplusplus
extern "C" {
#endif

/*---------------------------------------------------------------------------*
    L1 Data Cache Operations
 *---------------------------------------------------------------------------*/

void DCInvalidateRange  ( void* addr, u32 nBytes );
void DCFlushRange       ( void* addr, u32 nBytes );
void DCStoreRange       ( void* addr, u32 nBytes );
void DCFlushRangeNoSync ( void* addr, u32 nBytes );
void DCStoreRangeNoSync ( void* addr, u32 nBytes );
void DCZeroRange        ( void* addr, u32 nBytes );
void DCTouchRange       ( void* addr, u32 nBytes );

/*---------------------------------------------------------------------------*
    L1 Instruction Cache Operations
 *---------------------------------------------------------------------------*/

void ICInvalidateRange  ( void* addr, u32 nBytes );

/*---------------------------------------------------------------------------*
    Locked Cache Operations
 *---------------------------------------------------------------------------*/
// 0xEnnn nnnn addresses will be mapped in by LCEnable (DBAT3 will be used)
#define LC_BASE_PREFIX  0xE000
#define LC_BASE         (LC_BASE_PREFIX << 16)

void LCEnable           ( void );
void LCDisable          ( void );
void LCLoadBlocks       ( void* destTag,  void* srcAddr, u32 numBlocks );
void LCStoreBlocks      ( void* destAddr, void* srcTag,  u32 numBlocks );
u32  LCLoadData         ( void* destAddr, void* srcAddr, u32 nBytes );
u32  LCStoreData        ( void* destAddr, void* srcAddr, u32 nBytes );
u32  LCQueueLength      ( void );
void LCQueueWait        ( u32 len );
void LCFlushQueue       ( void );

#define LCGetBase()     ((void*)LC_BASE)
    
#ifdef __cplusplus
}
#endif

#endif  // __OSCACHE_H__
