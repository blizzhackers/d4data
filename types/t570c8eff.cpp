/**
 * Definition: t570c8eff
 * Hash: 570c8eff
 */

#include "t570c8eff.h"

void t570c8eff::read(const char* base, char* &ptr) {
  readData(&tHeader, base, ptr);
  readData(&annPlayer, base, ptr);
  readData(&unk_da5b2a0, base, ptr);
}
