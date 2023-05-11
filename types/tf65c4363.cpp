/**
 * Definition: tf65c4363
 * Hash: f65c4363
 */

#include "tf65c4363.h"

void tf65c4363::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x8;
  readData(&dwType, base, current);
  current = ptr + 0xc;
  readData(&dwPad, base, current);
  current = ptr + 0x10;
  readData(&snoScript, base, current);
  current = ptr + 0x20;
  readData(&gbidSpawnLocType, base, current);
  current = ptr + 0x28;
  readData(&arActorGroups, base, current);
  current = ptr + 0x38;
  readData(&unk_b5b0f9a, base, current);
  current = ptr + 0x48;
  readData(&arPrefabCustomizations, base, current);
  current = ptr + 0x58;
  readData(&bIsChild, base, current);
  ptr += 0x60;
}
