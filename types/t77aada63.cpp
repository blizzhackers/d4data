/**
 * Definition: t77aada63
 * Hash: 77aada63
 */

#include "t77aada63.h"

void t77aada63::read(const char* base, char* &ptr) {
  readData(&tValueMin, base, ptr);
  readData(&tValueMax, base, ptr);
  readData(&tTime, base, ptr);
}
