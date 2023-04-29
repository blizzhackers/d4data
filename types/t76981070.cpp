/**
 * Definition: t76981070
 * Hash: 76981070
 */

#include "t76981070.h"

void t76981070::read(const char* base, char* &ptr) {
  readData(&tHeader, base, ptr);
  readData(&uBlobSize, base, ptr);
}
