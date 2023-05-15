/**
 * Definition: ConditionProperty
 * Hash: 6c40890c
 */

#pragma once

#include "../types.h"

#pragma push(pack, 1)

struct ConditionProperty : public ComplexRead {

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
