/**
 * Definition: tf7ffb49f
 * Hash: f7ffb49f
 */

#pragma once

#include "../types.h"

#pragma push(pack, 1)

struct tf7ffb49f : public ComplexRead {
  DT_UINT dwType;
  DT_INT bInverse;
  DT_UINT dwPad;
  DT_ENUM<DT_INT> eSubject;
  DT_SNO<SnoGroup::MonsterFamily> snoMonsterFamily;
  DT_INT unk_e42b9be;
  DT_UINT szArchetype;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
