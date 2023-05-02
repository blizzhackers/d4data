/**
 * Definition: tb48524d3
 * Hash: b48524d3
 */

#include "tb48524d3.h"

void tb48524d3::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&eAttribute, base, current);
  current = ptr + 0x4;
  readData(&nParam, base, current);
  current = ptr + 0x8;
  readData(&unk_5439402, base, current);
  ptr += 0xc;
}
