/**
 * Definition: tbe72a11f
 * Hash: be72a11f
 */

#include "tbe72a11f.h"

void tbe72a11f::read(const char* base, char* &ptr) {
  readData(&tHeader, base, ptr);
  readData(&annPlayer, base, ptr);
  readData(&unk_76098e5, base, ptr);
  readData(&unk_d5b8271, base, ptr);
  readData(&unk_7888959, base, ptr);
}
