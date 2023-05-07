/**
 * Definition: BannerIcon
 * Hash: b9817bff
 */

#pragma once

#include "../types.h"
#include "StringLabelHandleEx.h"
#include "t6b1c5d9c.h"

#pragma push(pack, 1)

struct BannerIcon : public ComplexRead {
  DT_UINT szName;
  StringLabelHandleEx hLabel;
  DT_SNO<SnoGroup::Texture> snoTexture;
  DT_FLOAT unk_cd49a50;
  t6b1c5d9c hIcon;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
