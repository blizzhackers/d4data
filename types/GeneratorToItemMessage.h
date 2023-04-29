/**
 * Definition: GeneratorToItemMessage
 * Hash: 71465cbe
 */

#pragma once

#include "../types.h"
#include "t72bd65f8.h"

#pragma push(pack, 1)

struct GeneratorToItemMessage : public ComplexRead {
  t72bd65f8 tHeader;
  DT_CHARARRAY<1024> unk_fd3ecde;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
