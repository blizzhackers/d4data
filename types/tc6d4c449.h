/**
 * Definition: tc6d4c449
 * Hash: c6d4c449
 */

#pragma once

#include "../types.h"

#pragma push(pack, 1)

struct tc6d4c449 : public ComplexRead {
  DT_UINT hIcon;
  DT_UINT hTitle;
  DT_UINT hDescription;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
