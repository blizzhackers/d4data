/**
 * Definition: t586d03a
 * Hash: 586d03a
 */

#pragma once

#include "../types.h"

#pragma push(pack, 1)

struct t586d03a : public ComplexRead {
  DT_INT unk_73fba37;
  DT_INT snoMarker;
  DT_INT nMarkerIndex;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
