/**
 * Definition: ta89caf5a
 * Hash: a89caf5a
 */

#include "ta89caf5a.h"

void ta89caf5a::read(const char* base, char* &ptr) {
  readData(&tHeader, base, ptr);
  readData(&dwNodeIndex, base, ptr);
}
