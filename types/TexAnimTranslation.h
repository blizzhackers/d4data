/**
 * Definition: TexAnimTranslation
 * Hash: e67bed05
 */

#pragma once

#include "../types.h"

#pragma push(pack, 1)

struct TexAnimTranslation : public ComplexRead {
  DT_UINT dwType;
  DT_UINT dwPad;
  DT_FLOAT unk_828d6cf;
  DT_FLOAT unk_a7dff70;
  DT_FLOAT flUTransInitial;
  DT_RANGE<DT_INT> unk_803e8a7;
  DT_FLOAT flVTransInitial;
  DT_RANGE<DT_INT> unk_42b1708;
  DT_ENUM<DT_INT> ePinTranslation;
  DT_ENUM<DT_INT> eOrderOperation;
  DT_UINT unk_96b1a52;
  DT_UINT unk_ec7cf93;
  DT_UINT dwAnimFlags;
  DT_RANGE<DT_INT> unk_e5b0c7f;
  DT_FLOAT fXOffset;
  DT_FLOAT fYOffset;
  DT_FLOAT unk_95a8bdb;
  DT_UINT unk_85c824d;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
