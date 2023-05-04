/**
 * Definition: SkillTreeNode
 * Hash: 7d759f95
 */

#pragma once

#include "../types.h"
#include "SkillNodeConnectionMaybe.h"
#include "t9a30831a.h"

#pragma push(pack, 1)

struct SkillTreeNode : public ComplexRead {
  DT_UINT dwID;
  DT_GBID<0x2b> gbidReward;
  DT_INT unk_6536340;
  DT_VECTOR2D vPosition;
  DT_INT bRootNode;
  DT_UINT uReqSkillPointsMaybe;
  DT_INT unk_bb82ad1;
  DT_VARIABLEARRAY<SkillNodeConnectionMaybe> arConnections;
  DT_VARIABLEARRAY<t9a30831a> unk_e97a400;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
