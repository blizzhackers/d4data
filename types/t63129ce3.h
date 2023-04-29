/**
 * Definition: t63129ce3
 * Hash: 63129ce3
 */

#pragma once

#include "../types.h"
#include "MarkerHandle.h"
#include "t11b9d2b9.h"
#include "t6b1c5d9c.h"

#pragma push(pack, 1)

struct t63129ce3 : public ComplexRead {
  DT_UINT dwType;
  DT_UINT dwPad;
  DT_UINT dwUID;
  DT_UINT dwFlags;
  DT_ENUM<DT_INT> eType;
  DT_VARIABLEARRAY<t11b9d2b9> unk_721cdbf;
  DT_UINT unk_4b2de13;
  DT_VARIABLEARRAY<DT_SNO<SnoGroup::Item>> unk_188a07a;
  DT_INT unk_61c2846;
  DT_SNO<SnoGroup::Condition> unk_951ad2a;
  DT_SNO<SnoGroup::TreasureClass> snoReward;
  DT_INT unk_189b89b;
  DT_UINT nTimerDuration;
  DT_INT unk_2bde7b6;
  DT_VARIABLEARRAY<DT_SNO<SnoGroup::LevelArea>> unk_d3b7ed7;
  DT_INT unk_8280b0e;
  DT_INT unk_eff642d;
  DT_INT unk_fc27941;
  DT_UINT unk_d9a8a05;
  DT_UINT unk_5d4cfc0;
  DT_UINT unk_669bcf8;
  DT_UINT unk_287ecb5;
  DT_FLOAT unk_6344bd7;
  DT_CSTRING unk_9c63f9d;
  DT_CSTRING unk_c820299;
  MarkerHandle unk_fab6e45;
  DT_VECTOR3D unk_47f8481;
  DT_SNO<SnoGroup::World> unk_ed8215b;
  t6b1c5d9c unk_f6ded77;
  t6b1c5d9c unk_f84da79;
  DT_SNO<SnoGroup::AudioContext> snoAudioContext;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
