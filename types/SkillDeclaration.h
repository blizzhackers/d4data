/**
 * Definition: SkillDeclaration
 * Hash: 9cbbeaa5
 */

#pragma once

#include "../types.h"

#pragma push(pack, 1)

struct SkillDeclaration : public ComplexRead {
  DT_SNO<SnoGroup::Power> snoPower;
  DT_INT nLevelMod;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
