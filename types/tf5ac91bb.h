/**
 * Definition: tf5ac91bb
 * Hash: f5ac91bb
 */

#pragma once

#include "../types.h"

#pragma push(pack, 1)

struct tf5ac91bb : public ComplexRead {
  DT_INT64 data1;
  DT_INT64 data2;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
