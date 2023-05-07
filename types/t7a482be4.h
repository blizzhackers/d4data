/**
 * Definition: t7a482be4
 * Hash: 7a482be4
 */

#pragma once

#include "../types.h"
#include "t2d02bd94.h"
#include "t4d7ce083.h"
#include "t8b32a937.h"

#pragma push(pack, 1)

struct t7a482be4 : public ComplexRead {
  DT_SNO<SnoGroup::Appearance> snoAppearance;
  DT_UINT szLookName;
  DT_UINT unk_6c0cb90;
  DT_ENUM<DT_INT> unk_ce65d4b;
  DT_ENUM<DT_INT> eInstanceType;
  DT_VARIABLEARRAY<t8b32a937> ptInstances;
  t2d02bd94 unk_7934bc2;
  DT_UINT dwFlags;
  DT_VARIABLEARRAY<t4d7ce083> unk_b0425e7;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
