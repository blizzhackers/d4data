/**
 * Definition: CollisionSettingsDefinition
 * Hash: 3d66fca6
 */

#pragma once

#include "../types.h"
#include "ActorCollisionFlags.h"

#pragma push(pack, 1)

struct CollisionSettingsDefinition : public ComplexRead {
  ActorCollisionFlags tCollFlags;
  DT_INT unk_a882afd;
  DT_INT unk_54403ff;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
