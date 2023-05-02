/**
 * Definition: t7968ae25
 * Hash: 7968ae25
 */

#include "t7968ae25.h"

void t7968ae25::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x8;
  readData(&dwType, base, current);
  current = ptr + 0x10;
  readData(&bNegate, base, current);
  current = ptr + 0x14;
  readData(&dwPad, base, current);
  current = ptr + 0x18;
  readData(&snoLevelArea, base, current);
  current = ptr + 0x1c;
  readData(&unk_c7b2b18, base, current);
  ptr += 0x20;
}
