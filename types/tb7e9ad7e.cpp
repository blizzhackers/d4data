/**
 * Definition: tb7e9ad7e
 * Hash: b7e9ad7e
 */

#include "tb7e9ad7e.h"

void tb7e9ad7e::read(const char* base, char* &ptr) {
  ptr += 8;
  readData(&dwType, base, ptr);
  readData(&dwPad, base, ptr);
  readData(&unk_247a8fe, base, ptr);
  readData(&unk_a0febeb, base, ptr);
  readData(&unk_259dc59, base, ptr);
  readData(&unk_90599e6, base, ptr);
}
