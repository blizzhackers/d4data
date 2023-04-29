/**
 * Definition: t12daec08
 * Hash: 12daec08
 */

#pragma once

#include "../types.h"

#pragma push(pack, 1)

struct t12daec08 : public ComplexRead {
  DT_FLOAT flExplosionFactor;
  DT_FLOAT flFrequency;
  DT_FLOAT unk_3278f1;
  DT_FLOAT unk_d7a231e;
  DT_FLOAT unk_e7ab959;
  DT_SNO<SnoGroup::Sound> unk_77adebf;
  DT_SNO<SnoGroup::Sound> unk_4fe19d7;
  DT_SNO<SnoGroup::AmbientSound> snoAmbientSound;
  DT_FLOAT unk_620b5c3;
  DT_FLOAT unk_bf229f9;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
