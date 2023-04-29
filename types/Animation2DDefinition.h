/**
 * Definition: Animation2DDefinition
 * Hash: e7f3107f
 */

#pragma once

#include "../types.h"
#include "Anim2DFrame.h"
#include "FrameAnim.h"

#pragma push(pack, 1)

struct Animation2DDefinition : public ComplexRead {
  FrameAnim tFrameAnim;
  DT_SNO<SnoGroup::Sound> snoSound;
  DT_VARIABLEARRAY<Anim2DFrame> ptFrames;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
