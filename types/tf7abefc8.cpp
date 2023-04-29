/**
 * Definition: tf7abefc8
 * Hash: f7abefc8
 */

#include "tf7abefc8.h"

void tf7abefc8::read(const char* base, char* &ptr) {
  ptr += 8;
  readData(&dwType, base, ptr);
  readData(&unk_9b2bc26, base, ptr);
  readData(&unk_77ed19a, base, ptr);
  readData(&dwPad, base, ptr);
}
