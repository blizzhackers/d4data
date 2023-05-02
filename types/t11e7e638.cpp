/**
 * Definition: t11e7e638
 * Hash: 11e7e638
 */

#include "t11e7e638.h"

void t11e7e638::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&szName, base, current);
  current = ptr + 0x4;
  readData(&nScore, base, current);
  current = ptr + 0x8;
  readData(&unk_8105d80, base, current);
  current = ptr + 0x40;
  readData(&unk_bb98fd8, base, current);
  ptr += 0x50;
}
