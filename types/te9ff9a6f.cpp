/**
 * Definition: te9ff9a6f
 * Hash: e9ff9a6f
 */

#include "te9ff9a6f.h"

void te9ff9a6f::read(const char* base, char* &ptr) {
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
  ptr += 0x38;
}
