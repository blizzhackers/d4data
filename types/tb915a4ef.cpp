/**
 * Definition: tb915a4ef
 * Hash: b915a4ef
 */

#include "tb915a4ef.h"

void tb915a4ef::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x8;
  readData(&dwType, base, current);
  current = ptr + 0xc;
  readData(&dwPad, base, current);
  current = ptr + 0x10;
  readData(&unk_3ee4554, base, current);
  ptr += 0x20;
}
