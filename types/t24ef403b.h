/**
 * Definition: t24ef403b
 * Hash: 24ef403b
 */

#pragma once

#include "../types.h"

#pragma push(pack, 1)

struct t24ef403b : public ComplexRead {
  DT_UINT dwType;
  DT_INT bInverse;
  DT_UINT dwPad;
  DT_ENUM<DT_INT> eSubject;
  DT_SNO<SnoGroup::Affix> snoAffix;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
