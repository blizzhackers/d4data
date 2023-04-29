/**
 * Definition: t29d35c79
 * Hash: 29d35c79
 */

#pragma once

#include "../types.h"
#include "tb42131c6.h"

#pragma push(pack, 1)

struct t29d35c79 : public ComplexRead {
  DT_SNO<SnoGroup::Quest> snoQuest;
  tb42131c6 unk_537b67f;
  tb42131c6 unk_c67aacc;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
