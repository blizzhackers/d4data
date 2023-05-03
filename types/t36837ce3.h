/**
 * Definition: t36837ce3
 * Hash: 36837ce3
 */

#pragma once

#include "../types.h"
#include "t8b736c4.h"

#pragma push(pack, 1)

struct t36837ce3 : public ComplexRead {
  t8b736c4 tDefault;
  t8b736c4 tHover;
  t8b736c4 tTracked;
  t8b736c4 unk_918ddb6;
  DT_FLOAT unk_e253b58;
  DT_FLOAT flThickness;
  DT_SNO<SnoGroup::Texture> snoPattern;
  DT_FLOAT unk_a6fc3e4;
  DT_FLOAT unk_45e317c;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
