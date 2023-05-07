/**
 * Definition: MountPreset
 * Hash: 42e90c26
 */

#include "MountPreset.h"

void MountPreset::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x8;
  readData(&dwType, base, current);
  current = ptr + 0xc;
  readData(&dwPad, base, current);
  current = ptr + 0x10;
  readData(&szName, base, current);
  current = ptr + 0x20;
  readData(&snoWorld, base, current);
  current = ptr + 0x24;
  readData(&unk_d6d0056, base, current);
  current = ptr + 0x28;
  readData(&snoActor, base, current);
  current = ptr + 0x2c;
  readData(&arrItems, base, current);
  current = ptr + 0x34;
  readData(&unk_aff169e, base, current);
  ptr += 0x38;
}
