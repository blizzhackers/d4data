/**
 * Definition: t366a61ab
 * Hash: 366a61ab
 */

#include "t366a61ab.h"

void t366a61ab::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&tHeader, base, current);
  current = ptr + 0x10;
  readData(&unk_1bdcc9f, base, current);
  current = ptr + 0x14;
  readData(&unk_b0fd968, base, current);
  current = ptr + 0x18;
  readData(&uFlags, base, current);
  ptr += 0x1c;
}
