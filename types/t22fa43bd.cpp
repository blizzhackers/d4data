/**
 * Definition: t22fa43bd
 * Hash: 22fa43bd
 */

#include "t22fa43bd.h"

void t22fa43bd::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x8;
  readData(&dwType, base, current);
  current = ptr + 0xc;
  readData(&dwPad, base, current);
  current = ptr + 0x10;
  readData(&unk_d192efe, base, current);
  ptr += 0x20;
}
