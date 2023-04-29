/**
 * Definition: taf6042ce
 * Hash: af6042ce
 */

#pragma once

#include "../types.h"

#pragma push(pack, 1)

struct taf6042ce : public ComplexRead {
  DT_CSTRING szDrawHook;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
