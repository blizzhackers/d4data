/**
 * Definition: tbae3dde2
 * Hash: bae3dde2
 */

#include "tbae3dde2.h"

void tbae3dde2::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x8;
  readData(&dwType, base, current);
  current = ptr + 0xc;
  readData(&dwPad, base, current);
  current = ptr + 0x10;
  readData(&unk_247a8fe, base, current);
  current = ptr + 0x18;
  readData(&arConditions, base, current);
  current = ptr + 0x30;
  readData(&nPriority, base, current);
  ptr += 0x38;
}
