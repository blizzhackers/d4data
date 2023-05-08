/**
 * Definition: UIControlIcon
 * Hash: 6540e7e8
 */

#pragma once

#include "../types.h"

#pragma push(pack, 1)

struct UIControlIcon : public ComplexRead {
  DT_TAGMAP<DT_INT> unk_535a62d;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
