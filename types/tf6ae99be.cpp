/**
 * Definition: tf6ae99be
 * Hash: f6ae99be
 */

#include "tf6ae99be.h"

void tf6ae99be::read(const char* base, char* &ptr) {
  ptr += 8;
  readData(&dwType, base, ptr);
  readData(&dwPad, base, ptr);
  readData(&unk_d192efe, base, ptr);
}
