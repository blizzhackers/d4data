/**
 * Definition: t3256e101
 * Hash: 3256e101
 */

#pragma once

#include "../types.h"

#pragma push(pack, 1)

struct t3256e101 : public ComplexRead {
  DT_SNO<SnoGroup::Sound> snoClickSound;
  DT_SNO<SnoGroup::Sound> unk_6c212be;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
