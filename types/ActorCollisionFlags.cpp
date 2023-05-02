/**
 * Definition: ActorCollisionFlags
 * Hash: a4e7ec52
 */

#include "ActorCollisionFlags.h"

void ActorCollisionFlags::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&uDynamicFlagsNoOverlap, base, current);
  current = ptr + 0x4;
  readData(&uDynamicMyFlags, base, current);
  ptr += 0x8;
}
