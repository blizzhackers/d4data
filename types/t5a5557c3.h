/**
 * Definition: t5a5557c3
 * Hash: 5a5557c3
 */

#pragma once

#include "../types.h"

#pragma push(pack, 1)

struct t5a5557c3 : public ComplexRead {
  DT_UINT dwID;
  DT_UINT szTag;
  DT_SNO<SnoGroup::Sound> snoSound;
  DT_SNO<SnoGroup::Sound> unk_903b4d6;
  DT_SNO<SnoGroup::Sound> unk_48259c7;
  DT_UINT dwFlags;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
