/**
 * Definition: t85e87f2d
 * Hash: 85e87f2d
 */

#include "t85e87f2d.h"

void t85e87f2d::read(const char* base, char* &ptr) {
  readData(&tHeader, base, ptr);
  readData(&idSWorld, base, ptr);
  readData(&unk_b020582, base, ptr);
}
