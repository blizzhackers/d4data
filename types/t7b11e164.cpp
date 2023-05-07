/**
 * Definition: t7b11e164
 * Hash: 7b11e164
 */

#include "t7b11e164.h"

void t7b11e164::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&dwEntranceName, base, current);
  current = ptr + 0x4;
  readData(&unk_7d1b2c3, base, current);
  current = ptr + 0x8;
  readData(&unk_eb1dc3b, base, current);
  current = ptr + 0xc;
  readData(&dwPortalType, base, current);
  ptr += 0x10;
}
