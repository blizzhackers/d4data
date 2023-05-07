/**
 * Definition: AnimTreeLeaf
 * Hash: bce33d0d
 */

#pragma once

#include "../types.h"

#pragma push(pack, 1)

struct AnimTreeLeaf : public ComplexRead {
  DT_UINT dwID;
  DT_ENUM<DT_INT> eNodeType;
  DT_SNO<SnoGroup::Animation> snoAnim;
  DT_SNO<SnoGroup::Power> unk_740ce2b;
  DT_FLOAT flPoseFrame;
  DT_FLOAT flPlaySpeed;
  DT_INT nSyncGroupIndex;
  DT_INT bIsDisabled;
  DT_INT unk_4088987;
  DT_ENUM<DT_INT> eScaleMethod;
  DT_ENUM<DT_INT> eUpdateMode;
  DT_ENUM<DT_INT> eBoneWeightSet;
  DT_ENUM<DT_INT> eAnimLayer;
  DT_ENUM<DT_INT> unk_51765c9;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
