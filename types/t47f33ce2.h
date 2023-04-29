/**
 * Definition: t47f33ce2
 * Hash: 47f33ce2
 */

#pragma once

#include "../types.h"
#include "t2135ea8f.h"
#include "ta78f399f.h"

#pragma push(pack, 1)

struct t47f33ce2 : public ComplexRead {
  ta78f399f tHeader;
  DT_VARIABLEARRAY<t2135ea8f> arRanks;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
