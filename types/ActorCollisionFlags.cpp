/**
 * Definition: ActorCollisionFlags
 * Hash: a4e7ec52
 */

#include "ActorCollisionFlags.h"

void ActorCollisionFlags::read(const char* base, char* &ptr) {
  readData(&uDynamicFlagsNoOverlap, base, ptr);
  readData(&uDynamicMyFlags, base, ptr);
}
