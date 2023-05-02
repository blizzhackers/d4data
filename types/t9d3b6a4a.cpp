/**
 * Definition: t9d3b6a4a
 * Hash: 9d3b6a4a
 */

#include "t9d3b6a4a.h"

void t9d3b6a4a::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&tHeader, base, current);
  current = ptr + 0x10;
  readData(&unk_dce541c, base, current);
  current = ptr + 0x14;
  readData(&snoQuest, base, current);
  ptr += 0x18;
}
