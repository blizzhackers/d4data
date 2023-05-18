/**
 * Definition: StartingAllowedWeather
 * Hash: 4e8e96e4
 */

#pragma once

#include "../types.h"

#pragma push(pack, 1)

struct StartingAllowedWeather : public ComplexRead {
  DT_SNO<SnoGroup::SubZone> snoSubzone;
  DT_ENUM<DT_INT> unk_efcdea5;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
