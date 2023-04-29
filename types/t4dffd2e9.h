/**
 * Definition: t4dffd2e9
 * Hash: 4dffd2e9
 */

#pragma once

#include "../types.h"
#include "ta78f399f.h"

#pragma push(pack, 1)

struct t4dffd2e9 : public ComplexRead {
  ta78f399f tHeader;
  DT_ENUM<DT_INT> eCategory;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
