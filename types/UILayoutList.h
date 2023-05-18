/**
 * Definition: UILayoutList
 * Hash: c36fb4b8
 */

#pragma once

#include "../types.h"
#include "UILayoutEntries.h"

#pragma push(pack, 1)

struct UILayoutList : public ComplexRead {
  DT_VARIABLEARRAY<UILayoutEntries> arEntries;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
