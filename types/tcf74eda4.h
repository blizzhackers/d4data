/**
 * Definition: tcf74eda4
 * Hash: cf74eda4
 */

#pragma once

#include "../types.h"
#include "ta78f399f.h"

#pragma push(pack, 1)

struct tcf74eda4 : public ComplexRead {
  ta78f399f tHeader;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
