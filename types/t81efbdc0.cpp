/**
 * Definition: t81efbdc0
 * Hash: 81efbdc0
 */

#include "t81efbdc0.h"

void t81efbdc0::read(const char* base, char* &ptr) {
  readData(&snoEffectGroup, base, ptr);
  readData(&unk_6c0cb90, base, ptr);
  readData(&unk_7fd3994, base, ptr);
}
