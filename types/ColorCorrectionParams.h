/**
 * Definition: ColorCorrectionParams
 * Hash: 756e437b
 */

#pragma once

#include "../types.h"

#pragma push(pack, 1)

struct ColorCorrectionParams : public ComplexRead {
  DT_TAGMAP<DT_INT> unk_ba29200;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
