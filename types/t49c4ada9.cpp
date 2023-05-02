/**
 * Definition: t49c4ada9
 * Hash: 49c4ada9
 */

#include "t49c4ada9.h"

void t49c4ada9::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&snoScene, base, current);
  current = ptr + 0x4;
  readData(&unk_158239b, base, current);
  ptr += 0xc;
}
