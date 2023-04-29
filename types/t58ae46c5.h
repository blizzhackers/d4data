/**
 * Definition: t58ae46c5
 * Hash: 58ae46c5
 */

#pragma once

#include "../types.h"
#include "TriggerCleanup.h"
#include "TriggerConditions.h"

#pragma push(pack, 1)

struct t58ae46c5 : public ComplexRead {
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
  DT_ENUM<DT_INT> unk_f3d6423;
  DT_ENUM<DT_INT> unk_478755b;
  DT_FLOAT unk_4d01218;
  DT_FLOAT unk_84dd910;
  DT_UINT dwActorID;
  DT_ENUM<DT_INT> unk_b8e650c;
  DT_ENUM<DT_INT> unk_9209538;
  DT_INT unk_a5153a1;
  DT_INT unk_5ed01be;
  DT_INT unk_9b2ead;
  DT_SNO_NAME unk_bcac396;
  DT_INT unk_85269a4;
  DT_INT unk_701a0bf;
  DT_INT nPermutationIndex;
  DT_INT unk_32a328c;
  DT_FLOAT flAnimSpeedScale;
  DT_BYTE unk_12c22c8;
  DT_ENUM<DT_INT> unk_c7ffac9;
  DT_FLOAT unk_c86af88;
  DT_FLOAT unk_396c7d1;
  DT_INT unk_515279b;
  DT_UINT unk_1635dc2;
  DT_FLOAT unk_386656b;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
