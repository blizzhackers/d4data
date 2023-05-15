/**
 * Definition: ConsoleProperty
 * Hash: 288665f8
 */

#pragma once

#include "../types.h"

#pragma push(pack, 1)

struct ConsoleProperty : public ComplexRead {

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
