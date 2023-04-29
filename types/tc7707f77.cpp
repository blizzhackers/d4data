/**
 * Definition: tc7707f77
 * Hash: c7707f77
 */

#include "tc7707f77.h"

void tc7707f77::read(const char* base, char* &ptr) {
  readData(&tHeader, base, ptr);
  readData(&nCrafterType, base, ptr);
}
