/**
 * Definition: tf6a78647
 * Hash: f6a78647
 */

#pragma once

#include "../types.h"

#pragma push(pack, 1)

struct tf6a78647 : public ComplexRead {
  DT_INT nRequired;
  DT_SNO<SnoGroup::Affix> snoAffix;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
