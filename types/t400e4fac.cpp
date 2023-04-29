/**
 * Definition: t400e4fac
 * Hash: 400e4fac
 */

#include "t400e4fac.h"

void t400e4fac::read(const char* base, char* &ptr) {
  readData(&nFrameStart, base, ptr);
  readData(&nFrameEnd, base, ptr);
}
