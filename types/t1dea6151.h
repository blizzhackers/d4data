/**
 * Definition: t1dea6151
 * Hash: 1dea6151
 */

#pragma once

#include "../types.h"
#include "AttributeSpecifier.h"

#pragma push(pack, 1)

struct t1dea6151 : public ComplexRead {
  DT_INT unk_a008782;
  DT_INT unk_288eecd;
  AttributeSpecifier tAttribute;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
