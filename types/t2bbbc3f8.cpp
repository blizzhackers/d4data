/**
 * Definition: t2bbbc3f8
 * Hash: 2bbbc3f8
 */

#include "t2bbbc3f8.h"

void t2bbbc3f8::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&tHeader, base, current);
  current = ptr + 0x10;
  readData(&unk_a5fdfef, base, current);
  current = ptr + 0x14;
  readData(&unk_e69585a, base, current);
  ptr += 0x18;
}
