/**
 * Definition: t717e78cd
 * Hash: 717e78cd
 */

#pragma once

#include "../types.h"

#pragma push(pack, 1)

struct t717e78cd : public ComplexRead {
  DT_UINT dwType;
  DT_INT bNegate;
  DT_ENUM<DT_INT> unk_c0222bf;
  DT_UINT dwPad;
  DT_INT nIPower;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
