/**
 * Definition: t77e24bbd
 * Hash: 77e24bbd
 */

#include "t77e24bbd.h"

void t77e24bbd::read(const char* base, char* &ptr) {
  readData(&tValueMin, base, ptr);
  readData(&tValueMax, base, ptr);
  readData(&tTime, base, ptr);
}
