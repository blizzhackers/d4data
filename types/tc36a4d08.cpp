/**
 * Definition: tc36a4d08
 * Hash: c36a4d08
 */

#include "tc36a4d08.h"

void tc36a4d08::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x8;
  readData(&dwType, base, current);
  current = ptr + 0x10;
  readData(&flTime, base, current);
  current = ptr + 0x14;
  readData(&dwPad, base, current);
  ptr += 0x18;
}
