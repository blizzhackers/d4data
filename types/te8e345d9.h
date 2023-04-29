/**
 * Definition: te8e345d9
 * Hash: e8e345d9
 */

#pragma once

#include "../types.h"

#pragma push(pack, 1)

struct te8e345d9 : public ComplexRead {
  DT_SNO<SnoGroup::Sound> unk_2937ef5;
  DT_SNO<SnoGroup::Sound> unk_8649788;
  DT_SNO<SnoGroup::Sound> unk_128fb6f;
  DT_SNO<SnoGroup::Sound> unk_2fec1de;
  DT_SNO<SnoGroup::Sound> unk_c2ef7ca;
  DT_SNO<SnoGroup::Sound> unk_c5ab5e8;
  DT_SNO<SnoGroup::Sound> unk_5e34eb9;
  DT_SNO<SnoGroup::Sound> unk_6efe3d3;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
