/**
 * Definition: tf67f0209
 * Hash: f67f0209
 */

#include "tf67f0209.h"

void tf67f0209::read(const char* base, char* &ptr) {
  ptr += 8;
  readData(&dwType, base, ptr);
  readData(&dwPad, base, ptr);
  readData(&tEntries, base, ptr);
}
