/**
 * Definition: t39e053ba
 * Hash: 39e053ba
 */

#include "t39e053ba.h"

void t39e053ba::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x8;
  readData(&dwType, base, current);
  current = ptr + 0x10;
  readData(&bNegate, base, current);
  current = ptr + 0x18;
  readData(&unk_c0222bf, base, current);
  current = ptr + 0x1c;
  readData(&dwPad, base, current);
  current = ptr + 0x20;
  readData(&unk_99e9721, base, current);
  ptr += 0x28;
}
