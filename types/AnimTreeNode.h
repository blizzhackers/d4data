/**
 * Definition: AnimTreeNode
 * Hash: bce480bb
 */

#pragma once

#include "../types.h"
#include "t61c5dd90.h"
#include "t6fcd156.h"
#include "tb8e06bbf.h"

#pragma push(pack, 1)

struct AnimTreeNode : public ComplexRead {
  DT_UINT dwType;
  DT_UINT dwPad;
  DT_UINT dwID;
  DT_ENUM<DT_INT> eNodeType;
  DT_ENUM<DT_INT> eAnimLayer;
  DT_VARIABLEARRAY<tb8e06bbf> ptChildren;
  DT_ENUM<DT_INT> eBlendParam;
  DT_ENUM<DT_INT> unk_4241c63;
  DT_VARIABLEARRAY<t61c5dd90> unk_5733828;
  DT_VECTOR2D unk_51e2dd;
  DT_VECTOR2D unk_fd3931f;
  t6fcd156 unk_9a6f370;
  t6fcd156 unk_e857c51;
  DT_INT unk_dd1cd6f;
  DT_INT nSyncGroupIndex;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
