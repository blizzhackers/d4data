/**
 * Definition: t5b3d8ec5
 * Hash: 5b3d8ec5
 */

#include "t5b3d8ec5.h"

void t5b3d8ec5::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x8;
  readData(&dwType, base, current);
  current = ptr + 0xc;
  readData(&dwPad, base, current);
  current = ptr + 0x10;
  readData(&unk_12bca72, base, current);
  current = ptr + 0x20;
  readData(&unk_3989443, base, current);
  current = ptr + 0x30;
  readData(&arDyeList, base, current);
  ptr += 0x40;
}
