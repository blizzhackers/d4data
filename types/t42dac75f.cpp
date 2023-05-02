/**
 * Definition: t42dac75f
 * Hash: 42dac75f
 */

#include "t42dac75f.h"

void t42dac75f::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x8;
  readData(&dwType, base, current);
  current = ptr + 0x10;
  readData(&unk_2de4987, base, current);
  current = ptr + 0x18;
  readData(&arConditions, base, current);
  current = ptr + 0x30;
  readData(&bEnd, base, current);
  current = ptr + 0x34;
  readData(&dwPad, base, current);
  current = ptr + 0x38;
  readData(&flSeconds, base, current);
  ptr += 0x40;
}
