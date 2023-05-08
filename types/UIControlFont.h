/**
 * Definition: UIControlFont
 * Hash: 653f75b6
 */

#pragma once

#include "../types.h"

#pragma push(pack, 1)

struct UIControlFont : public ComplexRead {
  DT_TAGMAP<DT_INT> unk_86d67b;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
