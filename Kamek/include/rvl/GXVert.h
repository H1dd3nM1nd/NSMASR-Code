#ifndef __GXVERT_H__
#define __GXVERT_H__

#ifdef WIN32
#include <win32/win32.h>
#endif

// NOTE:  This file closely mirrors GXVert.c.
//        Don't change this file without considering that one too,
//        and vice-versa.

/********************************/
#ifdef __cplusplus
extern "C" {
#endif

/*>*******************************(*)*******************************<*/
#ifndef EMU // real hardware
/*---------------------------------------------*
 * Write gather pipe for GFXFifo               *
 *---------------------------------------------*/
#ifndef MINNOW
#define   GXFIFO_ADDR   0xCC008000
#else // MINNOW
#define   GXFIFO_ADDR   0x1C008000
#endif// MINNOW
typedef union uPPCWGPipe
{
    u8  u8;
    u16 u16;
    u32 u32;
    u64 u64;
    s8  s8;
    s16 s16;
    s32 s32;
    s64 s64;
    f32 f32;
    f64 f64;
} PPCWGPipe;


// SN-Phil: removed 'extern', added AT_ADDRESS
volatile PPCWGPipe GXWGFifo : (GXFIFO_ADDR) ;
//extern volatile PPCWGPipe GXWGFifo;

#endif // !EMU
/*---------------------------------------------------------------------------*/

/*---------------------------------------------------------------------------*/
/*---------------------------------------------*
 * GXVertex functions                          *
 *---------------------------------------------*/
//-------------------------------
// Define gfx function templates
//-------------------------------
//
// Templates syntax:
//  __GXCDEF (function_prefix, num_of_components, component_type)
//  __GXCDEFX(function_name, num_of_comps, src_comp_type, dest_comp_type)
//
#define __GXCDEF(prfx,n,t)  __GXCDEF##n(prfx##n##t,t,t)
#define __GXCDEFX(func,n,t) __GXCDEF##n(func,t,t)

#ifdef _DEBUG

// 1 component
#define __GXCDEF1(func,ts,td) \
    void func(const ts x);

// 2 components
#define __GXCDEF2(func,ts,td) \
    void func(const ts x, const ts y);

// 3 components
#define __GXCDEF3(func,ts,td) \
    void func(const ts x, const ts y, const ts z);

// 4 components
#define __GXCDEF4(func,ts,td) \
    void func(const ts x, const ts y, const ts z, const ts w);


#else // ifdef _DEBUG
/*---------------------------------------------*
 * For real hardware                           *
 *---------------------------------------------*/
#ifndef EMU

// 1 component
#define __GXCDEF1(func,ts,td) \
    static inline void func(const ts x) \
    {                         \
        GXWGFifo.td = (td) x; \
        return;               \
    }

// 2 components
#define __GXCDEF2(func,ts,td) \
    static inline void func(const ts x, const ts y) \
    {                         \
        GXWGFifo.td = (td) x; \
        GXWGFifo.td = (td) y; \
        return;               \
    }

// 3 components
#define __GXCDEF3(func,ts,td) \
    static inline void func(const ts x, const ts y, const ts z) \
    {                         \
        GXWGFifo.td = (td) x; \
        GXWGFifo.td = (td) y; \
        GXWGFifo.td = (td) z; \
        return;               \
    }

// 4 components
#define __GXCDEF4(func,ts,td) \
    static inline void func(const ts x, const ts y, const ts z, const ts w) \
    {                         \
        GXWGFifo.td = (td) x; \
        GXWGFifo.td = (td) y; \
        GXWGFifo.td = (td) z; \
        GXWGFifo.td = (td) w; \
        return;               \
    }

#endif // ifndef EMU

#endif // ifdef _DEBUG else

//---------------------------
// Generate inline functions
//---------------------------
//---- GXCmd[n][t] ----
__GXCDEF( GXCmd, 1, u8  )
__GXCDEF( GXCmd, 1, u16 )
__GXCDEF( GXCmd, 1, u32 )

//---- GXParam[n][t] ----
__GXCDEF( GXParam, 1, u8  )
__GXCDEF( GXParam, 1, u16 )
__GXCDEF( GXParam, 1, u32 )
__GXCDEF( GXParam, 1, s8  )
__GXCDEF( GXParam, 1, s16 )
__GXCDEF( GXParam, 1, s32 )
__GXCDEF( GXParam, 1, f32 )
__GXCDEF( GXParam, 3, f32 ) // for light
__GXCDEF( GXParam, 4, f32 ) // for matrix

//---- GXPosition[n][t] ----
  // for GX_POS_XYZ
__GXCDEF( GXPosition, 3, f32 )
__GXCDEF( GXPosition, 3, u8  )
__GXCDEF( GXPosition, 3, s8  )
__GXCDEF( GXPosition, 3, u16 )
__GXCDEF( GXPosition, 3, s16 )
  // for GX_POS_XY
__GXCDEF( GXPosition, 2, f32 )
__GXCDEF( GXPosition, 2, u8  )
__GXCDEF( GXPosition, 2, s8  )
__GXCDEF( GXPosition, 2, u16 )
__GXCDEF( GXPosition, 2, s16 )
  // for Index
__GXCDEFX( GXPosition1x16, 1, u16 )
__GXCDEFX( GXPosition1x8,  1, u8  )

//---- GXNormal[n][t] ----
  // for GX_NRM or GX_NBT
__GXCDEF( GXNormal, 3, f32 )
__GXCDEF( GXNormal, 3, s16 )
__GXCDEF( GXNormal, 3, s8  )
  // for Index
__GXCDEFX( GXNormal1x16, 1, u16 )
__GXCDEFX( GXNormal1x8,  1, u8  )

//---- GXColor[n][t] ----
  // for GX_CLR_RGBA8 or RGBX8
__GXCDEF( GXColor, 4, u8  )
__GXCDEF( GXColor, 1, u32 )
  // for GX_CLR_RGBA6 or RGB8
__GXCDEF( GXColor, 3, u8  )
  // for GX_CLR_RGBA4 or RGB565
__GXCDEF( GXColor, 1, u16 )
  // for Index
__GXCDEFX( GXColor1x16, 1, u16 )
__GXCDEFX( GXColor1x8,  1, u8  )

//---- GXTexCoord[n][t] ----
  // for GX_TEX_ST
__GXCDEF( GXTexCoord, 2, f32 )
__GXCDEF( GXTexCoord, 2, s16 )
__GXCDEF( GXTexCoord, 2, u16 )
__GXCDEF( GXTexCoord, 2, s8  )
__GXCDEF( GXTexCoord, 2, u8  )
  // for GX_TEX_S
__GXCDEF( GXTexCoord, 1, f32 )
__GXCDEF( GXTexCoord, 1, s16 )
__GXCDEF( GXTexCoord, 1, u16 )
__GXCDEF( GXTexCoord, 1, s8  )
__GXCDEF( GXTexCoord, 1, u8  )
  // for Index
__GXCDEFX( GXTexCoord1x16, 1, u16 )
__GXCDEFX( GXTexCoord1x8,  1, u8  )

//---- GXMatrixIndex* ----
// GXMatrixIndex1u8
__GXCDEF( GXMatrixIndex, 1, u8 )
#define GXMatrixIndex1x8    GXMatrixIndex1u8

//------------------------
// Undefine all templates
//------------------------
#undef  __GXCDEF
#undef  __GXCDEFX
#undef  __GXCDEF1
#undef  __GXCDEF2
#undef  __GXCDEF3
#undef  __GXCDEF4

/*---------------------------------------------------------------------------*/
// Packing macro for a several color format
#define	GXPackedRGB565(r,g,b)   \
	((u16)((((r)&0xf8)<<8)|(((g)&0xfc)<<3)|(((b)&0xf8)>>3)))
#define	GXPackedRGBA4(r,g,b,a)  \
	((u16)((((r)&0xf0)<<8)|(((g)&0xf0)<<4)|(((b)&0xf0)   )|(((a)&0xf0)>>4)))
#define	GXPackedRGB5A3(r,g,b,a) \
	((u16)((a)>=224 ? \
	((((r)&0xf8)<<7)|(((g)&0xf8)<<2)|(((b)&0xf8)>>3)|(1<<15)): \
	((((r)&0xf0)<<4)|(((g)&0xf0)   )|(((b)&0xf0)>>4)|(((a)&0xe0)<<7))))

#ifdef __cplusplus
}
#endif

#endif  // __GXVERT_H__

