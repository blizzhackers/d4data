/**
 * Definition: tf5318ac4
 * Hash: f5318ac4
 */

#include "tf5318ac4.h"

void tf5318ac4::read(const char* base, char* &ptr) {
  ptr += 8;
  readData(&dwType, base, ptr);
  readData(&dwPad, base, ptr);
  readData(&unk_247a8fe, base, ptr);
  readData(&unk_a0febeb, base, ptr);
}
