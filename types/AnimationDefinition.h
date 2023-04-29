/**
 * Definition: AnimationDefinition
 * Hash: 34803649
 */

#pragma once

#include "../types.h"
#include "AnimPermutation.h"

#pragma push(pack, 1)

struct AnimationDefinition : public ComplexRead {
  DT_UINT dwNextID;
  DT_UINT dwFlags;
  DT_ENUM<DT_INT> ePlaybackMode;
  DT_ENUM<DT_INT> unk_38fab0d;
  DT_ENUM<DT_INT> unk_c25df07;
  DT_INT unk_ba85a8e;
  DT_INT unk_847be4d;
  DT_SNO<SnoGroup::Appearance> snoAppearance;
  DT_VARIABLEARRAY<AnimPermutation> ptPermutations;
  DT_VARIABLEARRAY<DT_INT> unk_78651aa;
  DT_VARIABLEARRAY<DT_BYTE> unk_2bb50c4;
  DT_INT unk_88ce6d6;
  DT_INT unk_5316586;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
