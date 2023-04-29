/**
 * Definition: tcec695fb
 * Hash: cec695fb
 */

#include "tcec695fb.h"

void tcec695fb::read(const char* base, char* &ptr) {
  readData(&ptPositions, base, ptr);
  readData(&ptColors, base, ptr);
  readData(&unk_703599f, base, ptr);
  readData(&unk_72d072a, base, ptr);
  readData(&ptRotations, base, ptr);
  readData(&unk_22e26f1, base, ptr);
  readData(&unk_1666206, base, ptr);
}
