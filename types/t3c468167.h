/**
 * Definition: t3c468167
 * Hash: 3c468167
 */

#pragma once

#include "../types.h"
#include "FrameAnim.h"

#pragma push(pack, 1)

struct t3c468167 : public ComplexRead {
  DT_UINT dwType;
  DT_UINT dwPad;
  DT_FLOAT unk_828d6cf;
  DT_FLOAT unk_a7dff70;
  FrameAnim tFrameAnim;
  DT_INT fScaleUVsToFrame;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
