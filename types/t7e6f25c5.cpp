/**
 * Definition: t7e6f25c5
 * Hash: 7e6f25c5
 */

#include "t7e6f25c5.h"

void t7e6f25c5::read(const char* base, char* &ptr) {
  readData(&tHeader, base, ptr);
  readData(&snoActor, base, ptr);
  readData(&snoDeathOverride, base, ptr);
  readData(&uCount, base, ptr);
}
