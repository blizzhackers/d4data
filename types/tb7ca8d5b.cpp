/**
 * Definition: tb7ca8d5b
 * Hash: b7ca8d5b
 */

#include "tb7ca8d5b.h"

void tb7ca8d5b::read(const char* base, char* &ptr) {
  readData(&tHeader, base, ptr);
  readData(&unk_ddfb7d6, base, ptr);
  readData(&bEnabled, base, ptr);
}
