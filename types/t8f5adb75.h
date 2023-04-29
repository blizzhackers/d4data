/**
 * Definition: t8f5adb75
 * Hash: 8f5adb75
 */

#pragma once

#include "../types.h"

#pragma push(pack, 1)

struct t8f5adb75 : public ComplexRead {
  DT_CSTRING szName;
  DT_SNO<SnoGroup::Particle> unk_d0cf069;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
