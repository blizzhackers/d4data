/**
 * Definition: tf57ba7fb
 * Hash: f57ba7fb
 */

#include "tf57ba7fb.h"

void tf57ba7fb::read(const char* base, char* &ptr) {
  ptr += 8;
  readData(&dwType, base, ptr);
  readData(&dwPad, base, ptr);
  readData(&unk_247a8fe, base, ptr);
  readData(&unk_a0febeb, base, ptr);
}
