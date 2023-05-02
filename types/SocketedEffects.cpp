/**
 * Definition: SocketedEffects
 * Hash: 2e76b412
 */

#include "SocketedEffects.h"

void SocketedEffects::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&unk_51b6175, base, current);
  current = ptr + 0x8;
  readData(&ptAttributes, base, current);
  current = ptr + 0x18;
  readData(&tStringLabel, base, current);
  ptr += 0x20;
}
