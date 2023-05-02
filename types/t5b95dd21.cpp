/**
 * Definition: t5b95dd21
 * Hash: 5b95dd21
 */

#include "t5b95dd21.h"

void t5b95dd21::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&eSemantic, base, current);
  current = ptr + 0x4;
  readData(&eFormat, base, current);
  current = ptr + 0x8;
  readData(&nOffset, base, current);
  ptr += 0xc;
}
