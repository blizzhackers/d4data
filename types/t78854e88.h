/**
 * Definition: t78854e88
 * Hash: 78854e88
 */

#pragma once

#include "../types.h"

#pragma push(pack, 1)

struct t78854e88 : public ComplexRead {
  DT_SNO<SnoGroup::Music> snoMusic;
  DT_SNO<SnoGroup::AmbientSound> snoAmbient;
  DT_SNO<SnoGroup::Reverb> snoReverb;
  DT_SNO<SnoGroup::Weather> snoWeather;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
