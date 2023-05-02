/**
 * Definition: t81efbdc0
 * Hash: 81efbdc0
 */

#include "t81efbdc0.h"

void t81efbdc0::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&snoEffectGroup, base, current);
  current = ptr + 0x4;
  readData(&unk_6c0cb90, base, current);
  current = ptr + 0x8;
  readData(&unk_7fd3994, base, current);
  ptr += 0xc;
}
