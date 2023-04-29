/**
 * Definition: t18e49fff
 * Hash: 18e49fff
 */

#include "t18e49fff.h"

void t18e49fff::read(const char* base, char* &ptr) {
  readData(&countX, base, ptr);
  readData(&countY, base, ptr);
  readData(&cellWidth, base, ptr);
  readData(&aSamples, base, ptr);
  readData(&center, base, ptr);
  readData(&scale, base, ptr);
}
