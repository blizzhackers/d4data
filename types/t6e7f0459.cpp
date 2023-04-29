/**
 * Definition: t6e7f0459
 * Hash: 6e7f0459
 */

#include "t6e7f0459.h"

void t6e7f0459::read(const char* base, char* &ptr) {
  readData(&tHeader, base, ptr);
  readData(&ptArrayNodes, base, ptr);
}
