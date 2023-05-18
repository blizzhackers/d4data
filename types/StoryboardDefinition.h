/**
 * Definition: StoryboardDefinition
 * Hash: a83c7e92
 */

#pragma once

#include "../types.h"
#include "t36030d2d.h"
#include "t87385a6d.h"

#pragma push(pack, 1)

struct StoryboardDefinition : public ComplexRead {
  t36030d2d unk_97f94e0;
  DT_VARIABLEARRAY<t87385a6d> arChildControls;
  DT_POLYMORPHIC_VARIABLEARRAY unk_1722198;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
