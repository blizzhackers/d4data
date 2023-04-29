/**
 * Definition: t7946bdbb
 * Hash: 7946bdbb
 */

#pragma once

#include "../types.h"

#pragma push(pack, 1)

struct t7946bdbb : public ComplexRead {
  DT_UINT dwType;
  DT_ENUM<DT_INT> eParamType;
  DT_UINT dwPad;
  DT_UINT unk_1edc9f1;
  DT_CSTRING szQuest;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
