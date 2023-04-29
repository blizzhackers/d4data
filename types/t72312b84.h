/**
 * Definition: t72312b84
 * Hash: 72312b84
 */

#pragma once

#include "../types.h"
#include "bcQuat.h"
#include "t39274139.h"
#include "t44d219b4.h"

#pragma push(pack, 1)

struct t72312b84 : public ComplexRead {
  DT_UINT dwType;
  DT_FLOAT flRadius;
  DT_FLOAT unk_2fd1cdb;
  DT_RANGE<DT_INT> unk_dd52cf1;
  DT_RANGE<DT_INT> unk_87acb69;
  DT_RANGE<DT_INT> unk_87acb6a;
  DT_RANGE<DT_INT> unk_87acb6b;
  DT_RANGE<DT_INT> unk_9854b6a;
  DT_FLOAT flChance;
  DT_UINT dwFlags;
  DT_FLOAT unk_2a8c4b6;
  DT_FLOAT unk_335f70a;
  DT_FLOAT unk_c22ddc4;
  DT_RANGE<DT_INT> unk_6ead041;
  t39274139 unk_c1d96ad;
  DT_VARIABLEARRAY<t44d219b4> unk_a25251a;
  DT_SNO_NAME unk_9598b68;
  DT_ENUM<DT_INT> unk_d094b9a;
  bcQuat unk_e12fd27;
  DT_UINT szLookName;
  DT_UINT unk_6c0cb90;
  DT_UINT dwPad;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
