/**
 * Definition: t57949edb
 * Hash: 57949edb
 */

#pragma once

#include "../types.h"

#pragma push(pack, 1)

struct t57949edb : public ComplexRead {
  DT_UINT dwType;
  DT_INT bNegate;
  DT_UINT dwPad;
  DT_SNO<SnoGroup::MonsterFamily> snoMonsterFamily;
  DT_UINT szArchetype;
  DT_ENUM<DT_INT> unk_c7b2b18;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
