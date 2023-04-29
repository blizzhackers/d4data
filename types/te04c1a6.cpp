/**
 * Definition: te04c1a6
 * Hash: e04c1a6
 */

#include "te04c1a6.h"

void te04c1a6::read(const char* base, char* &ptr) {
  readData(&flTime, base, ptr);
  readData(&vPosition, base, ptr);
}
