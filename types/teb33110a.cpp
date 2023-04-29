/**
 * Definition: teb33110a
 * Hash: eb33110a
 */

#include "teb33110a.h"

void teb33110a::read(const char* base, char* &ptr) {
  readData(&tHeader, base, ptr);
  readData(&uBlobSize, base, ptr);
}
