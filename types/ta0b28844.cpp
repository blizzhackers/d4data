/**
 * Definition: ta0b28844
 * Hash: a0b28844
 */

#include "ta0b28844.h"

void ta0b28844::read(const char* base, char* &ptr) {
  readData(&tHeader, base, ptr);
  readData(&arUpdates, base, ptr);
}
