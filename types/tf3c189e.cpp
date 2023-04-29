/**
 * Definition: tf3c189e
 * Hash: f3c189e
 */

#include "tf3c189e.h"

void tf3c189e::read(const char* base, char* &ptr) {
  ptr += 8;
  readData(&dwType, base, ptr);
  readData(&dwPad, base, ptr);
  readData(&unk_d192efe, base, ptr);
}
