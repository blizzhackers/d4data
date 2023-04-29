/**
 * Definition: t93828ae3
 * Hash: 93828ae3
 */

#pragma once

#include "../types.h"

#pragma push(pack, 1)

struct t93828ae3 : public ComplexRead {
  DT_SNO<SnoGroup::Quest> snoQuest;
  DT_INT unk_783caeb;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
