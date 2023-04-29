/**
 * Definition: t63b64572
 * Hash: 63b64572
 */

#pragma once

#include "../types.h"

#pragma push(pack, 1)

struct t63b64572 : public ComplexRead {
  DT_UINT dwType;
  DT_INT bNegate;
  DT_ENUM<DT_INT> unk_c0222bf;
  DT_UINT dwPad;
  DT_SNO<SnoGroup::Power> unk_f1da7c5;
  DT_UINT unk_740244f;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
