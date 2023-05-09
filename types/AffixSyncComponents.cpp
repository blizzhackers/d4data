/**
 * Definition: AffixSyncComponents
 * Hash: 8af9af1
 */

#include "AffixSyncComponents.h"

void AffixSyncComponents::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x8;
  readData(&dwType, base, current);
  current = ptr + 0xc;
  readData(&dwPad, base, current);
  current = ptr + 0x10;
  readData(&unk_247a8fe, base, current);
  current = ptr + 0x18;
  readData(&arConditions, base, current);
  ptr += 0x30;
}
