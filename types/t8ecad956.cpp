/**
 * Definition: t8ecad956
 * Hash: 8ecad956
 */

#include "t8ecad956.h"

void t8ecad956::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&fDoorOpen, base, current);
  current = ptr + 0x4;
  readData(&unk_ec10912, base, current);
  current = ptr + 0x8;
  readData(&unk_41a0826, base, current);
  ptr += 0xc;
}
