/**
 * Definition: td3cb6977
 * Hash: d3cb6977
 */

#include "td3cb6977.h"

void td3cb6977::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x8;
  readData(&dwType, base, current);
  current = ptr + 0xc;
  readData(&dwPad, base, current);
  current = ptr + 0x10;
  readData(&unk_247a8fe, base, current);
  current = ptr + 0x18;
  readData(&arConditions, base, current);
  ptr += 0x30;
}
