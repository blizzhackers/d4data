/**
 * Definition: t3a7acb07
 * Hash: 3a7acb07
 */

#include "t3a7acb07.h"

void t3a7acb07::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&tHeader, base, current);
  current = ptr + 0x10;
  readData(&annTarget, base, current);
  current = ptr + 0x1c;
  readData(&unk_5692531, base, current);
  current = ptr + 0x2c;
  readData(&flImpactDirection, base, current);
  current = ptr + 0x34;
  readData(&unk_a6fef34, base, current);
  ptr += 0x44;
}
