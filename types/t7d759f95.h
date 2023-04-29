/**
 * Definition: t7d759f95
 * Hash: 7d759f95
 */

#pragma once

#include "../types.h"
#include "t9a30831a.h"
#include "te35b4849.h"

#pragma push(pack, 1)

struct t7d759f95 : public ComplexRead {
  DT_UINT dwID;
  DT_GBID<0x2b> gbidReward;
  DT_INT unk_6536340;
  DT_VECTOR2D vPosition;
  DT_INT bRootNode;
  DT_UINT unk_668050d;
  DT_INT unk_bb82ad1;
  DT_VARIABLEARRAY<te35b4849> arConnections;
  DT_VARIABLEARRAY<t9a30831a> unk_e97a400;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
