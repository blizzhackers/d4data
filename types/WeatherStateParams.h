/**
 * Definition: WeatherStateParams
 * Hash: 83887d5
 */

#pragma once

#include "../types.h"

#pragma push(pack, 1)

struct WeatherStateParams : public ComplexRead {
  DT_TAGMAP<DT_INT> unk_d6ca49a;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
