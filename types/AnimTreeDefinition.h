/**
 * Definition: AnimTreeDefinition
 * Hash: 907a53de
 */

#pragma once

#include "../types.h"
#include "AnimSyncGroup.h"
#include "AnimTreeLeaf.h"
#include "AnimTreeNode.h"

#pragma push(pack, 1)

struct AnimTreeDefinition : public ComplexRead {
  DT_UINT dwMachineTime;
  DT_UINT dwFlags;
  DT_VARIABLEARRAY<AnimTreeLeaf> ptLeaf;
  DT_VARIABLEARRAY<AnimTreeNode> ptNode;
  DT_VARIABLEARRAY<DT_INT> ptSyncGroup;
  DT_VARIABLEARRAY<AnimSyncGroup> unk_db47721;
  DT_UINT dwRootNode;
  DT_UINT dwNextID;
  DT_ENUM<DT_INT> unk_a7fd7f7;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
