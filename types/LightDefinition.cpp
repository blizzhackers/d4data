/**
 * Definition: LightDefinition
 * Hash: cbb2e681
 */

#include "LightDefinition.h"

void LightDefinition::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x8;
  readData(&dwFlags, base, current);
  current = ptr + 0xc;
  readData(&unk_1a8964e, base, current);
  current = ptr + 0x10;
  readData(&nPriority, base, current);
  current = ptr + 0x14;
  readData(&dwMaxInstances, base, current);
  current = ptr + 0x18;
  readData(&tInstanceData, base, current);
  current = ptr + 0x398;
  readData(&unk_383f1ce, base, current);
  current = ptr + 0x39c;
  readData(&unk_b9c2829, base, current);
  ptr += 0x3a0;
}
