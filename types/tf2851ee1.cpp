/**
 * Definition: tf2851ee1
 * Hash: f2851ee1
 */

#include "tf2851ee1.h"

void tf2851ee1::read(const char* base, char* &ptr) {
  ptr += 8;
  readData(&dwType, base, ptr);
  readData(&dwPad, base, ptr);
  readData(&unk_247a8fe, base, ptr);
  readData(&arConditions, base, ptr);
}
