/**
 * Definition: GlobalStore
 * Hash: d1319a9e
 */

#pragma once

#include "../types.h"
#include "t145727a4.h"
#include "t3c136761.h"
#include "tb3f69894.h"
#include "te3bec795.h"
#include "te7ead32b.h"

#pragma push(pack, 1)

struct GlobalStore : public ComplexRead {
  DT_UINT dwType;
  DT_UINT dwPad;
  DT_FLOAT unk_2fa1bf6;
  DT_FLOAT unk_5967152;
  DT_FLOAT unk_2eb3017;
  DT_FLOAT unk_9ff4d97;
  DT_FLOAT unk_ec0907f;
  DT_FLOAT unk_d7f8478;
  DT_INT unk_2009ff7;
  DT_FLOAT unk_23cca12;
  DT_FIXEDARRAY<t3c136761, 5> unk_a64749a;
  DT_SNO<SnoGroup::World> unk_d679087;
  DT_CSTRING unk_357aca5;
  DT_SNO<SnoGroup::World> unk_f86e686;
  DT_UINT unk_8fc9524;
  DT_FIXEDARRAY<tb3f69894, 3> unk_d7df52d;
  DT_ENUM<DT_INT> unk_107fe73;
  DT_FIXEDARRAY<te7ead32b, 16> unk_465e395;
  DT_FIXEDARRAY<t145727a4, 5> unk_3b4b9b7;
  DT_FIXEDARRAY<te3bec795, 4> unk_26a4b93;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
