/**
 * Definition: GlobalEmotes
 * Hash: d63e12fe
 */

#include "GlobalEmotes.h"

void GlobalEmotes::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x8;
  readData(&dwType, base, current);
  current = ptr + 0xc;
  readData(&dwPad, base, current);
  current = ptr + 0x10;
  readData(&unk_19b0f4a, base, current);
  ptr += 0x20;
}
