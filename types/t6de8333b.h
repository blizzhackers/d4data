/**
 * Definition: t6de8333b
 * Hash: 6de8333b
 */

#pragma once

#include "../types.h"
#include "t2070413b.h"

#pragma push(pack, 1)

struct t6de8333b : public ComplexRead {
  DT_SNO<SnoGroup::Appearance> unk_8da6c51;
  t2070413b unk_38cc238;
  DT_CHARARRAY<256> unk_68e4d62;
  t2070413b unk_9bec2e;
  DT_CHARARRAY<256> unk_f0e97d8;
  DT_SNO<SnoGroup::Animation> unk_755cb61;
  DT_UINT unk_2b8dba4;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
