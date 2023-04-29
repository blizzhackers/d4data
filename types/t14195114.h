/**
 * Definition: t14195114
 * Hash: 14195114
 */

#pragma once

#include "../types.h"

#pragma push(pack, 1)

struct t14195114 : public ComplexRead {
  DT_UINT dwID;
  DT_UINT hImage;
  DT_SNO<SnoGroup::Movie> snoMovie;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
