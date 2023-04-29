/**
 * Definition: t998a6b26
 * Hash: 998a6b26
 */

#include "t998a6b26.h"

void t998a6b26::read(const char* base, char* &ptr) {
  readData(&tHeader, base, ptr);
  readData(&ann, base, ptr);
  readData(&flRadius, base, ptr);
}
