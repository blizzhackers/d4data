/**
 * Definition: t7705c56a
 * Hash: 7705c56a
 */

#include "t7705c56a.h"

void t7705c56a::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&unk_c3af77b, base, current);
  current = ptr + 0x4;
  readData(&unk_dd5d06c, base, current);
  current = ptr + 0x8;
  readData(&unk_7f93f1d, base, current);
  current = ptr + 0xc;
  readData(&snoRecipe, base, current);
  ptr += 0x10;
}
