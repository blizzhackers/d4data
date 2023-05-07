/**
 * Definition: tdfc16fd
 * Hash: dfc16fd
 */

#include "tdfc16fd.h"

void tdfc16fd::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&unk_cf6449d, base, current);
  current = ptr + 0x8;
  readData(&unk_64456dc, base, current);
  current = ptr + 0x14;
  readData(&eComponentType, base, current);
  current = ptr + 0x18;
  readData(&szComponent, base, current);
  ptr += 0x1c;
}
