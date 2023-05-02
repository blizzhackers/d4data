/**
 * Definition: t2b920147
 * Hash: 2b920147
 */

#include "t2b920147.h"

void t2b920147::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&unk_d17aff0, base, current);
  current = ptr + 0x4;
  readData(&unk_39e87d5, base, current);
  ptr += 0x8;
}
