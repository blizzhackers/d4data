/**
 * Definition: tf042a8ca
 * Hash: f042a8ca
 */

#include "tf042a8ca.h"

void tf042a8ca::read(const char* base, char* &ptr) {
  ptr += 8;
  readData(&dwType, base, ptr);
  readData(&dwPad, base, ptr);
  readData(&unk_d192efe, base, ptr);
}
