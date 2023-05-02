/**
 * Definition: tbd83769a
 * Hash: bd83769a
 */

#include "tbd83769a.h"

void tbd83769a::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&snoAnimation, base, current);
  current = ptr + 0x4;
  readData(&unk_410408a, base, current);
  current = ptr + 0x8;
  readData(&flBlendTime, base, current);
  ptr += 0xc;
}
