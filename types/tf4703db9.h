/**
 * Definition: tf4703db9
 * Hash: f4703db9
 */

#pragma once

#include "../types.h"
#include "Marker.h"

#pragma push(pack, 1)

struct tf4703db9 : public ComplexRead {
  Marker tMarker;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
