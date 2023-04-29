/**
 * Definition: tb45c2d8f
 * Hash: b45c2d8f
 */

#include "tb45c2d8f.h"

void tb45c2d8f::read(const char* base, char* &ptr) {
  readData(&tHeader, base, ptr);
  readData(&unk_9de2896, base, ptr);
  readData(&arTransmogs, base, ptr);
}
