/**
 * Definition: tdcc8652e
 * Hash: dcc8652e
 */

#include "tdcc8652e.h"

void tdcc8652e::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&eAttribute, base, current);
  current = ptr + 0x4;
  readData(&nParam, base, current);
  ptr += 0x8;
}
