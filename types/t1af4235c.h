/**
 * Definition: t1af4235c
 * Hash: 1af4235c
 */

#pragma once

#include "../types.h"

#pragma push(pack, 1)

struct t1af4235c : public ComplexRead {
  DT_UINT dwType;
  DT_INT bNegate;
  DT_ENUM<DT_INT> unk_c0222bf;
  DT_UINT dwPad;
  DT_FLOAT flValue;
  DT_INT unk_adc7465;
  DT_ENUM<DT_INT> unk_c7b2b18;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
