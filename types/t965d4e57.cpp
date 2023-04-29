/**
 * Definition: t965d4e57
 * Hash: 965d4e57
 */

#include "t965d4e57.h"

void t965d4e57::read(const char* base, char* &ptr) {
  readData(&tHeader, base, ptr);
  readData(&eSlot, base, ptr);
  readData(&bEnable, base, ptr);
}
