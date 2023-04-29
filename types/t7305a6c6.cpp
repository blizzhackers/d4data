/**
 * Definition: t7305a6c6
 * Hash: 7305a6c6
 */

#include "t7305a6c6.h"

void t7305a6c6::read(const char* base, char* &ptr) {
  readData(&tHeader, base, ptr);
  readData(&szText, base, ptr);
}
