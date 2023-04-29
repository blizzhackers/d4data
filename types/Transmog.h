/**
 * Definition: Transmog
 * Hash: b754c22b
 */

#pragma once

#include "../types.h"

#pragma push(pack, 1)

struct Transmog : public ComplexRead {
  DT_SNO<SnoGroup::Item> snoItem;
  DT_SNO<SnoGroup::Dye> snoDye;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
