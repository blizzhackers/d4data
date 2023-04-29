/**
 * Definition: t41e42840
 * Hash: 41e42840
 */

#pragma once

#include "../types.h"
#include "t5a0f90a6.h"
#include "ta78f399f.h"

#pragma push(pack, 1)

struct t41e42840 : public ComplexRead {
  ta78f399f tHeader;
  DT_VARIABLEARRAY<t5a0f90a6> arQuests;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
