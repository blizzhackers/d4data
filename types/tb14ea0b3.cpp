/**
 * Definition: tb14ea0b3
 * Hash: b14ea0b3
 */

#include "tb14ea0b3.h"

void tb14ea0b3::read(const char* base, char* &ptr) {
  readData(&tHeader, base, ptr);
  readData(&unk_b4ca56, base, ptr);
  readData(&unk_a3f2e4b, base, ptr);
  readData(&unk_8c91f6f, base, ptr);
  readData(&unk_f2a9aef, base, ptr);
}
