/**
 * Definition: t14a42c17
 * Hash: 14a42c17
 */

#pragma once

#include "../types.h"

#pragma push(pack, 1)

struct t14a42c17 : public ComplexRead {
  DT_FLOAT unk_6942446;
  DT_FLOAT unk_11ed90c;
  DT_FLOAT unk_b9b72f0;
  DT_FLOAT unk_9cca79f;
  DT_FLOAT unk_ae42774;
  DT_FLOAT unk_5342bdc;
  DT_FLOAT unk_f2e6be7;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
