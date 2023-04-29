/**
 * Definition: ActorGroup
 * Hash: 9054a8c6
 */

#include "ActorGroup.h"

void ActorGroup::read(const char* base, char* &ptr) {
  readData(&uHash, base, ptr);
  readData(&szName, base, ptr);
}
