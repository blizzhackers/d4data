/**
 * Definition: t4c5f5791
 * Hash: 4c5f5791
 */

#pragma once

#include "../types.h"
#include "RequiredMessageHeader.h"

#pragma push(pack, 1)

struct t4c5f5791 : public ComplexRead {
  RequiredMessageHeader tHeader;
  DT_UINT unk_dce541c;
  DT_SNO<SnoGroup::Quest> snoQuest;
  DT_INT unk_588bc43;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
