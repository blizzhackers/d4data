/**
 * Definition: t2151baae
 * Hash: 2151baae
 */

#pragma once

#include "../types.h"

#pragma push(pack, 1)

struct t2151baae : public ComplexRead {
  DT_UINT dwType;
  DT_FLOAT flTime;
  DT_UINT dwPad;
  DT_SNO<SnoGroup::Sound> snoSound;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
