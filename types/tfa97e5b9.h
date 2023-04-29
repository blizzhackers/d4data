/**
 * Definition: tfa97e5b9
 * Hash: fa97e5b9
 */

#pragma once

#include "../types.h"

#pragma push(pack, 1)

struct tfa97e5b9 : public ComplexRead {
  DT_SNO<SnoGroup::AmbientSound> unk_7680ff6;
  DT_SNO<SnoGroup::AmbientSound> unk_31e7772;
  DT_SNO<SnoGroup::AmbientSound> unk_21b2258;
  DT_SNO<SnoGroup::AmbientSound> unk_71767bc;
  DT_SNO<SnoGroup::AmbientSound> unk_96bdac9;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
