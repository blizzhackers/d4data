/**
 * Definition: tabf5cfe3
 * Hash: abf5cfe3
 */

#pragma once

#include "../types.h"

#pragma push(pack, 1)

struct tabf5cfe3 : public ComplexRead {
  DT_SNO<SnoGroup::Item> snoMainHand;
  DT_SNO<SnoGroup::Item> snoOffHand;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
