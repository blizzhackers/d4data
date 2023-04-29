/**
 * Definition: t562c888c
 * Hash: 562c888c
 */

#pragma once

#include "../types.h"

#pragma push(pack, 1)

struct t562c888c : public ComplexRead {
  DT_CSTRING unk_238a70d;
  DT_CSTRING szSelectionCursor;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
