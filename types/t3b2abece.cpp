/**
 * Definition: t3b2abece
 * Hash: 3b2abece
 */

#include "t3b2abece.h"

void t3b2abece::read(const char* base, char* &ptr) {
  ptr += 8;
  readData(&dwType, base, ptr);
  readData(&flTime, base, ptr);
  readData(&dwPad, base, ptr);
  readData(&snoStoryboard, base, ptr);
}
