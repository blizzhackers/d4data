/**
 * Definition: t6c318664
 * Hash: 6c318664
 */

#include "t6c318664.h"

void t6c318664::read(const char* base, char* &ptr) {
  readData(&tHeader, base, ptr);
  readData(&eSoundType, base, ptr);
}
