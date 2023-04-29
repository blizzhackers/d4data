/**
 * Definition: t7ae253c2
 * Hash: 7ae253c2
 */

#include "t7ae253c2.h"

void t7ae253c2::read(const char* base, char* &ptr) {
  readData(&flRadius, base, ptr);
  readData(&bOverlap, base, ptr);
  readData(&wp1, base, ptr);
  readData(&wp2, base, ptr);
}
