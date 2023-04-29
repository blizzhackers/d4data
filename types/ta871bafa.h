/**
 * Definition: ta871bafa
 * Hash: a871bafa
 */

#pragma once

#include "../types.h"

#pragma push(pack, 1)

struct ta871bafa : public ComplexRead {
  DT_UINT dwType;
  DT_UINT dwPad;
  DT_ENUM<DT_INT> unk_77fbbf4;
  DT_VARIABLEARRAY<DT_GBID<0x14>> unk_29b00b2;
  DT_INT unk_158fc1a;
  DT_FIXEDARRAY<DT_INT, 4> unk_b823428;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
