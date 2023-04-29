/**
 * Definition: NetAttributeKeyValue
 * Hash: cb7586c1
 */

#pragma once

#include "../types.h"

#pragma push(pack, 1)

struct NetAttributeKeyValue : public ComplexRead {
  DT_OPTIONAL<DT_INT> nKeyParam;
  DT_ENUM<DT_INT> eKeyAttrib;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
