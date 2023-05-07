/**
 * Definition: t4bd0bef6
 * Hash: 4bd0bef6
 */

#include "t4bd0bef6.h"

void t4bd0bef6::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&eHairState, base, current);
  current = ptr + 0x4;
  readData(&unk_9295264, base, current);
  current = ptr + 0x8;
  readData(&eJewelryState, base, current);
  ptr += 0xc;
}
