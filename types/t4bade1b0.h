/**
 * Definition: t4bade1b0
 * Hash: 4bade1b0
 */

#pragma once

#include "../types.h"

#pragma push(pack, 1)

struct t4bade1b0 : public ComplexRead {
  DT_INT nWidth;
  DT_INT nHeight;
  DT_ENUM<DT_INT> eFormat;
  DT_VARIABLEARRAY<DT_BYTE> arTexels;
  DT_SNO<SnoGroup::Texture> snoTexture;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
