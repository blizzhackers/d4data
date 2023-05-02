/**
 * Definition: tb6de0233
 * Hash: b6de0233
 */

#include "tb6de0233.h"

void tb6de0233::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&eAttribute, base, current);
  current = ptr + 0x8;
  readData(&tValue, base, current);
  current = ptr + 0x28;
  readData(&nParam, base, current);
  current = ptr + 0x30;
  readData(&unk_dffdf28, base, current);
  ptr += 0x50;
}
