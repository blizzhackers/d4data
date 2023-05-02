/**
 * Definition: t46daa108
 * Hash: 46daa108
 */

#include "t46daa108.h"

void t46daa108::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x8;
  readData(&dwType, base, current);
  current = ptr + 0xc;
  readData(&dwPad, base, current);
  current = ptr + 0x10;
  readData(&unk_5d2c092, base, current);
  ptr += 0x18;
}
