/**
 * Definition: AnimTreeDefinition
 * Hash: 907a53de
 */

#include "AnimTreeDefinition.h"

void AnimTreeDefinition::read(const char* base, char* &ptr) {
  ptr += 8;
  readData(&dwMachineTime, base, ptr);
  readData(&dwFlags, base, ptr);
  readData(&ptLeaf, base, ptr);
  readData(&ptNode, base, ptr);
  readData(&ptSyncGroup, base, ptr);
  readData(&unk_db47721, base, ptr);
  readData(&dwRootNode, base, ptr);
  readData(&dwNextID, base, ptr);
  readData(&unk_a7fd7f7, base, ptr);
}
