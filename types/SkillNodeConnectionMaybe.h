/**
 * Definition: SkillNodeConnectionMaybe
 * Hash: e35b4849
 */

#pragma once

#include "../types.h"

#pragma push(pack, 1)

struct SkillNodeConnectionMaybe : public ComplexRead {
  DT_INT unk_e50f88c;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
