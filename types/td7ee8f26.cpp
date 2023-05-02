/**
 * Definition: td7ee8f26
 * Hash: d7ee8f26
 */

#include "td7ee8f26.h"

void td7ee8f26::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&snoMaterialValue, base, current);
  current = ptr + 0x4;
  readData(&nBitOffset, base, current);
  current = ptr + 0x8;
  readData(&unk_bbe4258, base, current);
  current = ptr + 0x18;
  readData(&flDefaultValue, base, current);
  ptr += 0x20;
}
