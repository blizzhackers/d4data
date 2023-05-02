/**
 * Definition: t41e68f26
 * Hash: 41e68f26
 */

#include "t41e68f26.h"

void t41e68f26::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x8;
  readData(&dwType, base, current);
  current = ptr + 0x10;
  readData(&flTime, base, current);
  current = ptr + 0x14;
  readData(&dwPad, base, current);
  current = ptr + 0x18;
  readData(&tValue, base, current);
  current = ptr + 0x1c;
  readData(&unk_6ca113c, base, current);
  ptr += 0x20;
}
