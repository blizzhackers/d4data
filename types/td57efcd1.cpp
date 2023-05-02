/**
 * Definition: td57efcd1
 * Hash: d57efcd1
 */

#include "td57efcd1.h"

void td57efcd1::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x8;
  readData(&dwType, base, current);
  current = ptr + 0xc;
  readData(&dwPad, base, current);
  current = ptr + 0x10;
  readData(&unk_4c404ef, base, current);
  current = ptr + 0x20;
  readData(&unk_51879a8, base, current);
  ptr += 0x30;
}
