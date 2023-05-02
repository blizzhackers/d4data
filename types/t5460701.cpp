/**
 * Definition: t5460701
 * Hash: 5460701
 */

#include "t5460701.h"

void t5460701::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&unk_68dec9e, base, current);
  current = ptr + 0x4;
  readData(&unk_f77a839, base, current);
  ptr += 0x14;
}
