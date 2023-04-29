/**
 * Definition: taec481b3
 * Hash: aec481b3
 */

#pragma once

#include "../types.h"
#include "taf0abce6.h"

#pragma push(pack, 1)

struct taec481b3 : public ComplexRead {
  DT_VARIABLEARRAY<taf0abce6> arEntries;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
