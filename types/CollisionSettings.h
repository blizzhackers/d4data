/**
 * Definition: CollisionSettings
 * Hash: b6c4d1fd
 */

#pragma once

#include "../types.h"
#include "ActorCollisionFlags.h"

#pragma push(pack, 1)

struct CollisionSettings : public ComplexRead {
  DT_SNO<SnoGroup::CollisionSettings> snoCollision;
  ActorCollisionFlags unk_1966de6;
  DT_INT unk_a882afd;
  DT_INT unk_54403ff;

  void read(const char* base, char* &ptr);
};

#pragma pop(pack)
