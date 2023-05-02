/**
 * Definition: tf285a4a4
 * Hash: f285a4a4
 */

#include "tf285a4a4.h"

void tf285a4a4::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x8;
  readData(&dwType, base, current);
  current = ptr + 0xc;
  readData(&dwPad, base, current);
  current = ptr + 0x10;
  readData(&arHeroes, base, current);
  current = ptr + 0x20;
  readData(&unk_8189b39, base, current);
  current = ptr + 0x30;
  readData(&arNPCs, base, current);
  ptr += 0x40;
}
