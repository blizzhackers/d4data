/**
 * Definition: tcc5838a
 * Hash: cc5838a
 */

#include "tcc5838a.h"

void tcc5838a::read(const char* base, char* &ptr) {
  readData(&szName, base, ptr);
  readData(&transform, base, ptr);
  readData(&unk_644027a, base, ptr);
  readData(&unk_83cc220, base, ptr);
  readData(&unk_81a5ef8, base, ptr);
  readData(&unk_2e8bbc0, base, ptr);
  readData(&unk_2cc466b, base, ptr);
  readData(&unk_375223b, base, ptr);
}
