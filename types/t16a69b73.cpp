/**
 * Definition: t16a69b73
 * Hash: 16a69b73
 */

#include "t16a69b73.h"

void t16a69b73::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&tHeader, base, current);
  current = ptr + 0x10;
  readData(&tSNOName, base, current);
  current = ptr + 0x18;
  readData(&unk_68d2b86, base, current);
  ptr += 0x1c;
}
