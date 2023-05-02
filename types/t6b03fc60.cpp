/**
 * Definition: t6b03fc60
 * Hash: 6b03fc60
 */

#include "t6b03fc60.h"

void t6b03fc60::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x8;
  readData(&dwType, base, current);
  current = ptr + 0x10;
  readData(&flTime, base, current);
  current = ptr + 0x14;
  readData(&dwPad, base, current);
  current = ptr + 0x18;
  readData(&tValue, base, current);
  current = ptr + 0x20;
  readData(&unk_6ca113c, base, current);
  ptr += 0x28;
}
