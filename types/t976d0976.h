/**
 * Definition: t976d0976
 * Hash: 976d0976
 */

#pragma once

#include "../types.h"

#pragma push(pack, 1)

struct t976d0976 : public ComplexRead {
  DT_SNO<SnoGroup::Font> snoFont;
  DT_INT dwFontSize;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
