/**
 * Definition: t560ae4cf
 * Hash: 560ae4cf
 */

#include "t560ae4cf.h"

void t560ae4cf::read(const char* base, char* &ptr) {
  readData(&tHeader, base, ptr);
  readData(&ptArrayNodes, base, ptr);
}
