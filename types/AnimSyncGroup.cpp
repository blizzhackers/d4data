/**
 * Definition: AnimSyncGroup
 * Hash: a69f5af
 */

#include "AnimSyncGroup.h"

void AnimSyncGroup::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&unk_a74dc71, base, current);
  ptr += 0x4;
}
