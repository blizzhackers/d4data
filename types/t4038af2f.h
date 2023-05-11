/**
 * Definition: t4038af2f
 * Hash: 4038af2f
 */

#pragma once

#include "../types.h"
#include "TriggerCleanup.h"
#include "TriggerConditions.h"

#pragma push(pack, 1)

struct t4038af2f : public ComplexRead {
  DT_UINT dwType;
  TriggerConditions tConditions;
  DT_INT fGenerated;
  DT_INT unk_6cba752;
  DT_UINT unk_e560b0b;
  DT_FLOAT tDuration;
  DT_UINT dwTriggerFlags;
  DT_UINT unk_a936bd9;
  TriggerCleanup tCleanup;
  DT_INT unk_49e9257;
  DT_INT unk_5490979;
  DT_UINT dwPad;
  DT_RGBACOLOR rgbaColorAdd;
  DT_FLOAT nHitFlashAddDuration;
  DT_RGBACOLOR rgbaColorMul;
  DT_FLOAT nHitFlashMulDuration;
  DT_FLOAT unk_d6526ac;
  DT_FLOAT unk_622a853;
  DT_FLOAT unk_faa2c92;
  DT_ENUM<DT_INT> unk_135c4d0;
  DT_ENUM<DT_INT> unk_6ba75;
  DT_ENUM<DT_INT> unk_53a2e7d;
  DT_UINT dwID;
  DT_UINT unk_b765a7;
  DT_INT unk_17f7deb;
  DT_INT unk_b19da4b;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
