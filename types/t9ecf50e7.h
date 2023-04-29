/**
 * Definition: t9ecf50e7
 * Hash: 9ecf50e7
 */

#pragma once

#include "../types.h"

#pragma push(pack, 1)

struct t9ecf50e7 : public ComplexRead {
  DT_SNO<SnoGroup::Condition> unk_e17307d;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
