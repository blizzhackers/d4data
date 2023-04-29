/**
 * Definition: t30f99fc2
 * Hash: 30f99fc2
 */

#pragma once

#include "../types.h"

#pragma push(pack, 1)

struct t30f99fc2 : public ComplexRead {
  DT_SNO<SnoGroup::PlayerTitle> snoPrefix;
  DT_SNO<SnoGroup::PlayerTitle> snoSuffix;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
