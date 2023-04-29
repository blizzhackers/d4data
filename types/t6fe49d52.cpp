/**
 * Definition: t6fe49d52
 * Hash: 6fe49d52
 */

#include "t6fe49d52.h"

void t6fe49d52::read(const char* base, char* &ptr) {
  ptr += 8;
  readData(&dwType, base, ptr);
  readData(&bNegate, base, ptr);
  readData(&dwPad, base, ptr);
  readData(&snoLevelArea, base, ptr);
}
