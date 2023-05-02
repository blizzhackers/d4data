/**
 * Definition: t2b0b488
 * Hash: 2b0b488
 */

#include "t2b0b488.h"

void t2b0b488::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&tHeader, base, current);
  current = ptr + 0x10;
  readData(&snoWorld, base, current);
  current = ptr + 0x14;
  readData(&wpLocation, base, current);
  current = ptr + 0x20;
  readData(&unk_336454f, base, current);
  current = ptr + 0x24;
  readData(&unk_164ef1e, base, current);
  ptr += 0x28;
}
