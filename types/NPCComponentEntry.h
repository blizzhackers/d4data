/**
 * Definition: NPCComponentEntry
 * Hash: 92249466
 */

#pragma once

#include "../types.h"
#include "ValidComponent.h"

#pragma push(pack, 1)

struct NPCComponentEntry : public ComplexRead {
  DT_INT bAny;
  DT_VARIABLEARRAY<ValidComponent> ptValidComponents;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
