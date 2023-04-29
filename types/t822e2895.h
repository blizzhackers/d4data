/**
 * Definition: t822e2895
 * Hash: 822e2895
 */

#pragma once

#include "../types.h"
#include "VectorPath.h"
#include "t560ae4cf.h"
#include "tcbfdd2ea.h"

#pragma push(pack, 1)

struct t822e2895 : public ComplexRead {
  DT_INT fIsFogged;
  t560ae4cf unk_9b03b68;
  t560ae4cf unk_626bdd1;
  tcbfdd2ea unk_b6d6da5;
  tcbfdd2ea unk_199c08f;
  tcbfdd2ea unk_ad452f7;
  tcbfdd2ea unk_74cb27e;
  tcbfdd2ea unk_a788b48;
  tcbfdd2ea unk_2e75c3a;
  tcbfdd2ea unk_b2aba89;
  tcbfdd2ea unk_72030bc;
  tcbfdd2ea unk_7204f87;
  tcbfdd2ea unk_32d918a;
  tcbfdd2ea unk_f95c9b0;
  t560ae4cf unk_aef59b6;
  tcbfdd2ea unk_f5edab3;
  tcbfdd2ea unk_5014cdd;
  tcbfdd2ea unk_647fc8;
  DT_INT unk_a8a3bbf;
  t560ae4cf unk_68b6393;
  tcbfdd2ea unk_fa30591;
  tcbfdd2ea unk_da3c9c0;
  tcbfdd2ea unk_35f6be9;
  tcbfdd2ea unk_3db80f1;
  tcbfdd2ea unk_95c9a3c;
  DT_FLOAT unk_49c7577;
  DT_FLOAT unk_2ba647c;
  tcbfdd2ea unk_babc18b;
  VectorPath pathWind;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
