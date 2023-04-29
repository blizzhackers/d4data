/**
 * Definition: te64c779c
 * Hash: e64c779c
 */

#include "te64c779c.h"

void te64c779c::read(const char* base, char* &ptr) {
  readData(&tHeader, base, ptr);
  readData(&arRanges, base, ptr);
}
