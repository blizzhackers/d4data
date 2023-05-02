/**
 * Definition: td774a564
 * Hash: d774a564
 */

#include "td774a564.h"

void td774a564::read(const char* base, char* &ptr) {
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
  readData(&flDistance, base, current);
  ptr += 0x40;
}
