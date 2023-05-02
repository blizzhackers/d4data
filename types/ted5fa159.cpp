/**
 * Definition: ted5fa159
 * Hash: ed5fa159
 */

#include "ted5fa159.h"

void ted5fa159::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&unk_633271a, base, current);
  current = ptr + 0x4;
  readData(&unk_54b79bf, base, current);
  ptr += 0x8;
}
