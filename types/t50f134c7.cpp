/**
 * Definition: t50f134c7
 * Hash: 50f134c7
 */

#include "t50f134c7.h"

void t50f134c7::read(const char* base, char* &ptr) {
  ptr += 8;
  readData(&dwType, base, ptr);
  readData(&bNegate, base, ptr);
  readData(&dwPad, base, ptr);
  readData(&eItemLabel, base, ptr);
}
