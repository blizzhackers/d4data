/**
 * Definition: tf36b7fbd
 * Hash: f36b7fbd
 */

#pragma once

#include "../types.h"

#pragma push(pack, 1)

struct tf36b7fbd : public ComplexRead {
  DT_UINT dwType;
  DT_INT bInverse;
  DT_UINT dwPad;
  DT_ENUM<DT_INT> eSubject;
  DT_SNO<SnoGroup::ParagonNode> snoParagonNode;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
