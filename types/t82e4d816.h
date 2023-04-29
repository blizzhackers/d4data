/**
 * Definition: t82e4d816
 * Hash: 82e4d816
 */

#pragma once

#include "../types.h"

#pragma push(pack, 1)

struct t82e4d816 : public ComplexRead {
  DT_WORD unk_3ced7e7;
  DT_WORD dwType;
  DT_FLOAT unk_8c59f26;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
