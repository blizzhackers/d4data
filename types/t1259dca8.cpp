/**
 * Definition: t1259dca8
 * Hash: 1259dca8
 */

#include "t1259dca8.h"

void t1259dca8::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&snoWorld, base, current);
  current = ptr + 0x4;
  readData(&unk_af8e0d, base, current);
  current = ptr + 0x8;
  readData(&snoActor, base, current);
  ptr += 0xc;
}
