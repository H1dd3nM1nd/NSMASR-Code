#ifndef __KOOPATLAS_MAP_H
#define __KOOPATLAS_MAP_H

#include "koopatlas/core.h"

// Can't remember why I had this. Who cares
#define GEKKO
#include "rvl/mtx.h"
#include "rvl/GXEnum.h"
#include "rvl/GXStruct.h"
#include "rvl/GXTransform.h"
#include "rvl/GXGeometry.h"
#include "rvl/GXDispList.h"
#include "rvl/GXLighting.h"
#include "rvl/GXTev.h"
#include "rvl/GXTexture.h"
#include "rvl/GXCull.h"
#include "rvl/GXPixel.h"
#include "rvl/GXBump.h"
#include "rvl/GXVert.h"
#include "rvl/vifuncs.h"

class dWMMap_c : public dBase_c {
	public:
		dWMMap_c();

		int onCreate();
		int onDelete();
		int onExecute();
		int onDraw();

		class renderer_c : public m3d::proc_c {
			public:
				mAllocator_c allocator;

				void drawOpa();
				void drawXlu();

			private:
				void drawLayers();

				void beginRendering();
				void endRendering();

				void renderTileLayer(dKPLayer_s *layer, dKPLayer_s::sector_s *sector);
				void renderDoodadLayer(dKPLayer_s *layer);

				void loadTexture(GXTexObj *obj);

				void loadCamera();
				void loadCamera(Mtx m);

				GXTexObj *currentTexture;
				Mtx renderMtx;
				float baseZ;

				int minX, minY, maxX, maxY;
		};
		
		renderer_c renderer;
		enum EffRenderCount { EFFECT_RENDERER_COUNT = 12 };
		BGGMEffectRenderer effectRenderers[EFFECT_RENDERER_COUNT];

		mEf::es2 effects[7];
		void doEffects();

		mHeapAllocator_c allocator;
		m3d::mdl_c bgModel;
		m3d::anmTexSrt_c bgSrtAnm;
		mMtx bgMatrix;

		void renderPathLayer(dKPLayer_s *layer);

		static dWMMap_c *build();
		static dWMMap_c *instance;
};

#endif

