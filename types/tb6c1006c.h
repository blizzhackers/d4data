/**
 * Definition: tb6c1006c
 * Hash: b6c1006c
 */

#pragma once

#include "../types.h"
#include "FrameAnim.h"
#include "tcc354444.h"

#pragma push(pack, 1)

struct tb6c1006c : public ComplexRead {
  DT_UINT dwType;
  DT_UINT dwPad;
  DT_FLOAT unk_828d6cf;
  DT_FLOAT unk_a7dff70;
  FrameAnim tFrameAnim;
  tcc354444 unk_f7b62d6;
  DT_RANGE<DT_INT> tDuration;
  DT_INT fScaleUVsToFrame;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
