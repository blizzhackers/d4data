/**
 * Definition: ConsoleEvent
 * Hash: 8e2e2975
 */

#pragma once

#include "../types.h"

#pragma push(pack, 1)

struct ConsoleEvent : public ComplexRead {

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
