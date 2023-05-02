/**
 * Definition: ActorGroup
 * Hash: 9054a8c6
 */

#include "ActorGroup.h"

void ActorGroup::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&uHash, base, current);
  current = ptr + 0x4;
  readData(&szName, base, current);
  ptr += 0x44;
}
