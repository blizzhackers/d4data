/**
 * Definition: ta9417475
 * Hash: a9417475
 */

#pragma once

#include "../types.h"

#pragma push(pack, 1)

struct ta9417475 : public ComplexRead {
  DT_ENUM<DT_INT> unk_43efd8c;
  DT_SNO<SnoGroup::Quest> snoQuest;
  DT_UINT unk_ed2a98e;
  DT_UINT unk_31547ea;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
