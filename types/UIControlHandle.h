/**
 * Definition: UIControlHandle
 * Hash: b6a07fab
 */

#pragma once

#include "../types.h"

#pragma push(pack, 1)

struct UIControlHandle : public ComplexRead {
  DT_SNO<SnoGroup::StringList> snoUI;
  DT_UINT szControlName;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
