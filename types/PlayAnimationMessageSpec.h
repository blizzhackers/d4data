/**
 * Definition: PlayAnimationMessageSpec
 * Hash: 8d3156c6
 */

#pragma once

#include "../types.h"

#pragma push(pack, 1)

struct PlayAnimationMessageSpec : public ComplexRead {
  DT_UINT dwDuration;
  DT_INT unk_8d507db;
  DT_SNO<SnoGroup::Animation> snoAnim;
  DT_SNO<SnoGroup::Power> unk_740ce2b;
  DT_INT eWeaponClass;
  DT_INT nPermutationIndex;
  DT_FLOAT flAnimSpeedScale;
  DT_OPTIONAL<DT_INT> unk_faa8f49;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
