/**
 * Definition: TestDefinitionMusic
 * Hash: f5b3e70a
 */

#pragma once

#include "../types.h"
#include "tf18a2f0.h"

#pragma push(pack, 1)

struct TestDefinitionMusic : public ComplexRead {
  tf18a2f0 tName;
  DT_FLOAT flValue;
  DT_FLOAT flMin;
  DT_FLOAT flMax;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
