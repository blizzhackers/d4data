/**
 * Definition: t517250
 * Hash: 517250
 */

#include "t517250.h"

void t517250::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&tHeader, base, current);
  current = ptr + 0x104;
  readData(&unk_20d9783, base, current);
  ptr += 0x108;
}
