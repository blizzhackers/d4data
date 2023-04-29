/**
 * Definition: t75e1365e
 * Hash: 75e1365e
 */

#pragma once

#include "../types.h"
#include "RequiredMessageHeader.h"

#pragma push(pack, 1)

struct t75e1365e : public ComplexRead {
  RequiredMessageHeader tHeader;
  DT_SNO<SnoGroup::Music> snoMusic;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
