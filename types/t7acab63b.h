/**
 * Definition: t7acab63b
 * Hash: 7acab63b
 */

#pragma once

#include "../types.h"
#include "t560ae4cf.h"
#include "tcbfdd2ea.h"

#pragma push(pack, 1)

struct t7acab63b : public ComplexRead {
  DT_SNO<SnoGroup::Texture> unk_f28e177;
  DT_SNO<SnoGroup::Texture> unk_da03493;
  t560ae4cf unk_565e352;
  tcbfdd2ea unk_8ad8da;
  tcbfdd2ea unk_78ac986;
  DT_VECTOR2D unk_c1cc405;
  DT_VECTOR2D unk_af3caab;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
