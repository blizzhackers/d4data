/**
 * Definition: t78fcb58d
 * Hash: 78fcb58d
 */

#include "t78fcb58d.h"

void t78fcb58d::read(const char* base, char* &ptr) {
  readData(&tHeader, base, ptr);
  readData(&szLogString, base, ptr);
}
