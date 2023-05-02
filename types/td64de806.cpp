/**
 * Definition: td64de806
 * Hash: d64de806
 */

#include "td64de806.h"

void td64de806::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x8;
  readData(&dwType, base, current);
  current = ptr + 0xc;
  readData(&dwPad, base, current);
  current = ptr + 0x10;
  readData(&unk_d192efe, base, current);
  ptr += 0x20;
}
