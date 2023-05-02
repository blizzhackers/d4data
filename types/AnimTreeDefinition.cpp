/**
 * Definition: AnimTreeDefinition
 * Hash: 907a53de
 */

#include "AnimTreeDefinition.h"

void AnimTreeDefinition::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x8;
  readData(&dwMachineTime, base, current);
  current = ptr + 0xc;
  readData(&dwFlags, base, current);
  current = ptr + 0x10;
  readData(&ptLeaf, base, current);
  current = ptr + 0x20;
  readData(&ptNode, base, current);
  current = ptr + 0x30;
  readData(&ptSyncGroup, base, current);
  current = ptr + 0x40;
  readData(&unk_db47721, base, current);
  current = ptr + 0x50;
  readData(&dwRootNode, base, current);
  current = ptr + 0x54;
  readData(&dwNextID, base, current);
  current = ptr + 0x58;
  readData(&unk_a7fd7f7, base, current);
  ptr += 0x60;
}
