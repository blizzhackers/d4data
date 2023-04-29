/**
 * Definition: t65bae4f1
 * Hash: 65bae4f1
 */

#pragma once

#include "../types.h"

#pragma push(pack, 1)

struct t65bae4f1 : public ComplexRead {
  DT_SNO<SnoGroup::Item> snoItem;
  DT_INT nCount;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
