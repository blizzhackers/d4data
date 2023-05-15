/**
 * Definition: ted54571c
 * Hash: ed54571c
 */

#pragma once

#include "../types.h"
#include "RestrictedComponent.h"

#pragma push(pack, 1)

struct ted54571c : public ComplexRead {
  DT_VARIABLEARRAY<RestrictedComponent> ptRestrictedComponents;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
