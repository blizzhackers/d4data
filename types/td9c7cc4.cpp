/**
 * Definition: td9c7cc4
 * Hash: d9c7cc4
 */

#include "td9c7cc4.h"

void td9c7cc4::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&tHeader, base, current);
  current = ptr + 0x10;
  readData(&unk_1fe6e13, base, current);
  current = ptr + 0x18;
  readData(&unk_3dd9525, base, current);
  current = ptr + 0x1c;
  readData(&unk_ed3262c, base, current);
  current = ptr + 0x24;
  readData(&snoAspect, base, current);
  ptr += 0x28;
}
