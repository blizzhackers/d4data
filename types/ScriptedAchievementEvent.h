/**
 * Definition: ScriptedAchievementEvent
 * Hash: c6bbf7a9
 */

#pragma once

#include "../types.h"
#include "ta78f399f.h"

#pragma push(pack, 1)

struct ScriptedAchievementEvent : public ComplexRead {
  ta78f399f tHeader;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
