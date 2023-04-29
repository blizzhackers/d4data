/**
 * Definition: t6ff50068
 * Hash: 6ff50068
 */

#pragma once

#include "../types.h"
#include "tb0f2a959.h"

#pragma push(pack, 1)

struct t6ff50068 : public ComplexRead {
  tb0f2a959 tHeader;
  DT_UINT unk_dce541c;
  DT_SNO<SnoGroup::LevelArea> snoLevelArea;
  DT_ENUM<DT_INT> unk_fcdc6f6;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
