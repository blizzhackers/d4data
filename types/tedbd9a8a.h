/**
 * Definition: tedbd9a8a
 * Hash: edbd9a8a
 */

#pragma once

#include "../types.h"
#include "t4d7ce083.h"

#pragma push(pack, 1)

struct tedbd9a8a : public ComplexRead {
  DT_UINT dwFlags;
  DT_ENUM<DT_INT> unk_32bf9c6;
  DT_ENUM<DT_INT> unk_f116b76;
  DT_INT nFadeGroup;
  DT_ENUM<DT_INT> unk_d094b9a;
  DT_ENUM<DT_INT> unk_ce65d4b;
  DT_UINT unk_4bfd602;
  DT_UINT unk_6c0cb90;
  DT_SNO<SnoGroup::Surface> unk_dc9436d;
  DT_VARIABLEARRAY<t4d7ce083> unk_b0425e7;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
