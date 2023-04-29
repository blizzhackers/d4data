/**
 * Definition: t331e33e0
 * Hash: 331e33e0
 */

#include "t331e33e0.h"

void t331e33e0::read(const char* base, char* &ptr) {
  readData(&tHeader, base, ptr);
  readData(&bEquipped, base, ptr);
  readData(&bBackpack, base, ptr);
  readData(&bStash, base, ptr);
}
