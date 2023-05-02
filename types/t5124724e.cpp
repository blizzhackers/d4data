/**
 * Definition: t5124724e
 * Hash: 5124724e
 */

#include "t5124724e.h"

void t5124724e::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&unk_57774cb, base, current);
  current = ptr + 0x40;
  readData(&unk_526ad18, base, current);
  current = ptr + 0x44;
  readData(&unk_1bbdc5a, base, current);
  current = ptr + 0x48;
  readData(&unk_67a7cbd, base, current);
  current = ptr + 0x4c;
  readData(&unk_599f054, base, current);
  ptr += 0x50;
}
