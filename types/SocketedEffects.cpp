/**
 * Definition: SocketedEffects
 * Hash: 2e76b412
 */

#include "SocketedEffects.h"

void SocketedEffects::read(const char* base, char* &ptr) {
  readData(&unk_51b6175, base, ptr);
  readData(&ptAttributes, base, ptr);
  readData(&tStringLabel, base, ptr);
}
