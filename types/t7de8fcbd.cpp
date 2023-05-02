/**
 * Definition: t7de8fcbd
 * Hash: 7de8fcbd
 */

#include "t7de8fcbd.h"

void t7de8fcbd::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&unk_6ed9d36, base, current);
  current = ptr + 0x8;
  readData(&unk_6a86924, base, current);
  current = ptr + 0xc;
  readData(&unk_d3735e1, base, current);
  current = ptr + 0x10;
  readData(&unk_6a86826, base, current);
  current = ptr + 0x14;
  readData(&nWeights, base, current);
  ptr += 0x24;
}
