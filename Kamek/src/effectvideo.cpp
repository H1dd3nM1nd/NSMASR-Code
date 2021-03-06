#include <common.h>
#include <game.h>
#include <g3dhax.h>
#include <sfx.h>

class EffectVideo : public dEn_c {
	int onCreate();
	int onExecute();
	int onDelete();

	u64 eventFlag;
	s32 timer;
	u32 delay;

	u32 effect;
	u8 type;
	float scale;

	static EffectVideo *build();
};

EffectVideo *EffectVideo::build() {
	void *buffer = AllocFromGameHeap1(sizeof(EffectVideo));
	return new(buffer) EffectVideo;
}

int EffectVideo::onCreate() {
	this->timer = 0;

	char eventNum = (this->settings >> 24) & 0xFF;
	this->eventFlag = (u64)1 << (eventNum - 1);

	this->type = (this->settings >> 16) & 0xF;
	this->effect = this->settings & 0xFFF;
	this->scale	= ((this->settings >> 20) & 0xF) / 4.0;
	this->delay	= (this->settings >> 12) & 0xF * 30;

	if (this->scale == 0.0)
		this->scale = 1.0;

	return true;
}

int EffectVideo::onDelete() {
	return true;
}

int EffectVideo::onExecute() {
	if (dFlagMgr_c::instance->flags & this->eventFlag) {
		if (this->timer == this->delay) {
			if (this->type == 0) // Plays a sound
				PlaySoundAsync(this, this->effect);
			
			else if (this->effect) // Plays an effect
				SpawnEffectByNum(this->effect-1, 0, &this->pos, &(S16Vec){0,0,0}, &(Vec){this->scale, this->scale, this->scale});

			this->timer = 0;

			if (this->delay == 0)
				this->delay = -1;
		}

		this->timer++;
	}
	return true;
}
