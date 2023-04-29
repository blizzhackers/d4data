/**
 * Definition: t623d5c49
 * Hash: 623d5c49
 */

#pragma once

#include "../types.h"
#include "TriggerConditions.h"

#pragma push(pack, 1)

struct t623d5c49 : public ComplexRead {
  DT_UINT dwType;
  DT_UINT dwPad;
  TriggerConditions tConditions;
  DT_INT fGenerated;
  DT_INT unk_6cba752;
  DT_UINT unk_e560b0b;
  DT_UINT dwTriggerFlags;
  DT_UINT unk_a936bd9;
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

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
