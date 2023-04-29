/**
 * Definition: t1de9164f
 * Hash: 1de9164f
 */

#include "t1de9164f.h"

void t1de9164f::read(const char* base, char* &ptr) {
  readData(&flLeft, base, ptr);
  readData(&flTop, base, ptr);
  readData(&flRight, base, ptr);
  readData(&flBottom, base, ptr);
}
