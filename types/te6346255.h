/**
 * Definition: te6346255
 * Hash: e6346255
 */

#pragma once

#include "../types.h"
#include "te3f5648a.h"

#pragma push(pack, 1)

struct te6346255 : public ComplexRead {
  DT_ENUM<DT_INT> unk_6b47564;
  DT_POLYMORPHIC_VARIABLEARRAY ptProxData;
  DT_SNO<SnoGroup::Power> unk_3bb8e5;
  DT_SNO<SnoGroup::EffectGroup> unk_545d2f2;
  DT_SNO<SnoGroup::EffectGroup> unk_80a13f3;
  DT_SNO<SnoGroup::EffectGroup> unk_2820068;
  DT_ENUM<DT_INT> unk_678b471;
  DT_UINT unk_543b637;
  DT_SNO<SnoGroup::TreasureClass> unk_4140351;
  DT_VARIABLEARRAY<DT_GBID<0x18>> arActorGroups;
  DT_VARIABLEARRAY<DT_GBID<0x33>> unk_b5b0f9a;
  DT_RANGE<DT_INT> unk_6232e63;
  DT_RANGE<DT_INT> unk_a9ac839;
  DT_RANGE<DT_INT> unk_1674da9;
  DT_FLOAT unk_d17f29d;
  DT_FLOAT unk_b6d51da;
  DT_INT unk_4c74fea;
  DT_INT nSpawnMaxCount;
  DT_INT unk_7524f2c;
  DT_SNO<SnoGroup::Condition> unk_a838b80;
  DT_INT unk_b123ad6;
  DT_FLOAT unk_b694fec;
  DT_INT unk_b95d59f;
  DT_INT unk_53b6c5f;
  DT_INT unk_915258d;
  DT_INT unk_b043709;
  DT_RANGE<DT_INT> tOffsetRadius;
  DT_ENUM<DT_INT> eFacingType;
  DT_FLOAT unk_9a103a0;
  DT_INT unk_c9a925d;
  DT_RANGE<DT_INT> unk_3d07f2f;
  DT_INT unk_c2ce9c;
  DT_INT unk_92ef706;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
