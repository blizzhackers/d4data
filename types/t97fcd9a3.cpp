/**
 * Definition: t97fcd9a3
 * Hash: 97fcd9a3
 */

#include "t97fcd9a3.h"

void t97fcd9a3::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&unk_9b43ddf, base, current);
  current = ptr + 0x4;
  readData(&unk_a4ff40, base, current);
  current = ptr + 0x8;
  readData(&aMaxSpeed, base, current);
  ptr += 0xc;
}
