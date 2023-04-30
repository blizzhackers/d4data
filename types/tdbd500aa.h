/**
 * Definition: tdbd500aa
 * Hash: dbd500aa
 */

#pragma once

#include "../types.h"

#pragma push(pack, 1)

struct tdbd500aa : public ComplexRead {
  DT_SNO<SnoGroup::Script> snoScript;
  DT_INT fCannotBeTargetedByAI;
  DT_INT unk_195410b;
  DT_INT unk_e1b2967;
  DT_INT fInvulnerable;
  DT_INT unk_d27bf99;
  DT_INT fCannotDie;
  DT_INT unk_9ad1b04;
  DT_FLOAT flNoSpawnRadius;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
