/**
 * Definition: tef4e42e5
 * Hash: ef4e42e5
 */

#pragma once

#include "../types.h"

#pragma push(pack, 1)

struct tef4e42e5 : public ComplexRead {
  DT_UINT dwType;
  DT_UINT dwPad;
  DT_ENUM<DT_INT> unk_97fcdff;
  DT_SNO<SnoGroup::LevelArea> snoLevelArea;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
