/**
 * Definition: t7b11e164
 * Hash: 7b11e164
 */

#include "t7b11e164.h"

void t7b11e164::read(const char* base, char* &ptr) {
  readData(&dwEntranceName, base, ptr);
  readData(&unk_7d1b2c3, base, ptr);
  readData(&unk_eb1dc3b, base, ptr);
  readData(&unk_336454f, base, ptr);
}
