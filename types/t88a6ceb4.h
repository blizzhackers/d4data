/**
 * Definition: t88a6ceb4
 * Hash: 88a6ceb4
 */

#pragma once

#include "../types.h"

#pragma push(pack, 1)

struct t88a6ceb4 : public ComplexRead {
  DT_UINT dwType;
  DT_INT bNegate;
  DT_ENUM<DT_INT> unk_c0222bf;
  DT_UINT dwPad;
  DT_ENUM<DT_INT> unk_f489816;
  DT_FLOAT flValue;
  DT_ENUM<DT_INT> unk_c7b2b18;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
