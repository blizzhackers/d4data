/**
 * Definition: tdf8f2b75
 * Hash: df8f2b75
 */

#pragma once

#include "../types.h"

#pragma push(pack, 1)

struct tdf8f2b75 : public ComplexRead {
  DT_FLOAT unk_746f6e7;
  DT_FLOAT unk_c60221b;
  DT_INT unk_1f66e44;
  DT_FLOAT unk_86e9b87;
  DT_ENUM<DT_INT> unk_af4aac3;
  DT_ENUM<DT_INT> unk_e0262a4;
  DT_ENUM<DT_INT> unk_29b6a75;
  DT_ENUM<DT_INT> unk_1ccce48;
  DT_ENUM<DT_INT> unk_6fc84d8;
  DT_ENUM<DT_INT> unk_a2f5bc6;
  DT_ENUM<DT_INT> unk_507fb94;
  DT_ENUM<DT_INT> unk_3c55dd8;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
