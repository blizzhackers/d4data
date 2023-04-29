/**
 * Definition: tb4c55066
 * Hash: b4c55066
 */

#include "tb4c55066.h"

void tb4c55066::read(const char* base, char* &ptr) {
  readData(&q, base, ptr);
  readData(&wp, base, ptr);
  readData(&flScale, base, ptr);
}
