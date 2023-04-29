/**
 * Definition: ta248a466
 * Hash: a248a466
 */

#pragma once

#include "../types.h"

#pragma push(pack, 1)

struct ta248a466 : public ComplexRead {
  DT_UINT dwType;
  DT_INT bInverse;
  DT_UINT dwPad;
  DT_ENUM<DT_INT> eSubject;
  DT_SNO<SnoGroup::ParagonGlyphAffix> snoParagonGlyphAffix;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
