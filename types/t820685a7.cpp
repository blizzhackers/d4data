/**
 * Definition: t820685a7
 * Hash: 820685a7
 */

#include "t820685a7.h"

void t820685a7::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x8;
  readData(&dwType, base, current);
  current = ptr + 0x10;
  readData(&eParamType, base, current);
  current = ptr + 0x14;
  readData(&dwPad, base, current);
  current = ptr + 0x18;
  readData(&unk_33f86dd, base, current);
  ptr += 0x20;
}
