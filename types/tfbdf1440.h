/**
 * Definition: tfbdf1440
 * Hash: fbdf1440
 */

#pragma once

#include "../types.h"
#include "t98dc03a5.h"

#pragma push(pack, 1)

struct tfbdf1440 : public ComplexRead {
  DT_VARIABLEARRAY<t98dc03a5> arBones;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
