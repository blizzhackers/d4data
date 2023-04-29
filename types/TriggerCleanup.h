/**
 * Definition: TriggerCleanup
 * Hash: 78f2ed9c
 */

#pragma once

#include "../types.h"

#pragma push(pack, 1)

struct TriggerCleanup : public ComplexRead {
  DT_ENUM<DT_INT> unk_80dc73;
  DT_ENUM<DT_INT> unk_f216739;
  DT_ENUM<DT_INT> unk_8047af2;
  DT_ENUM<DT_INT> unk_4690732;
  DT_ENUM<DT_INT> unk_2041ce1;
  DT_ENUM<DT_INT> unk_c5ce3af;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
