/**
 * Definition: t8e13293
 * Hash: 8e13293
 */

#include "t8e13293.h"

void t8e13293::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&tHeader, base, current);
  current = ptr + 0x14;
  readData(&unk_dce541c, base, current);
  current = ptr + 0x18;
  readData(&snoEmblem, base, current);
  ptr += 0x1c;
}
