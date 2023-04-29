/**
 * Definition: t3a448b70
 * Hash: 3a448b70
 */

#pragma once

#include "../types.h"

#pragma push(pack, 1)

struct t3a448b70 : public ComplexRead {
  DT_SNO<SnoGroup::Power> snoPower;
  DT_SNO<SnoGroup::Animation> snoAnim;
  DT_SNO<SnoGroup::Animation> unk_e94caff;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
