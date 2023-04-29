/**
 * Definition: tbe2f3b4
 * Hash: be2f3b4
 */

#include "tbe2f3b4.h"

void tbe2f3b4::read(const char* base, char* &ptr) {
  readData(&tHeader, base, ptr);
  readData(&reason, base, ptr);
}
