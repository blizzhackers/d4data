/**
 * Definition: t15872dca
 * Hash: 15872dca
 */

#include "t15872dca.h"

void t15872dca::read(const char* base, char* &ptr) {
  readData(&tHeader, base, ptr);
  readData(&idSWorld, base, ptr);
}
