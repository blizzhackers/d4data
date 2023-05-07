/**
 * Definition: teb8eea32
 * Hash: eb8eea32
 */

#pragma once

#include "../types.h"

#pragma push(pack, 1)

struct teb8eea32 : public ComplexRead {
  DT_UINT dwType;
  DT_ENUM<DT_INT> eParamType;
  DT_UINT dwPad;
  DT_SNO<SnoGroup::MonsterFamily> snoMonsterFamily;
  DT_UINT szArchetype;
  DT_UINT unk_f2a10c4;
  DT_ENUM<DT_INT> eOptionalRarity;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
