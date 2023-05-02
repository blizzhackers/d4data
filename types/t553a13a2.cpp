/**
 * Definition: t553a13a2
 * Hash: 553a13a2
 */

#include "t553a13a2.h"

void t553a13a2::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&snoWorld, base, current);
  current = ptr + 0x4;
  readData(&unk_770f3b7, base, current);
  current = ptr + 0x8;
  readData(&unk_c3535ed, base, current);
  current = ptr + 0x10;
  readData(&unk_2195b98, base, current);
  ptr += 0x20;
}
