/**
 * Definition: ActorMountData
 * Hash: 3c856b06
 */

#pragma once

#include "../types.h"

#pragma push(pack, 1)

struct ActorMountData : public ComplexRead {
  DT_ENUM<DT_INT> unk_66a8c73;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
