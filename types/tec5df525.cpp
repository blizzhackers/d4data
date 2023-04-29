/**
 * Definition: tec5df525
 * Hash: ec5df525
 */

#include "tec5df525.h"

void tec5df525::read(const char* base, char* &ptr) {
  readData(&nFrameStart, base, ptr);
  readData(&nFrameEnd, base, ptr);
  readData(&unk_f28aa5a, base, ptr);
  readData(&unk_963cba8, base, ptr);
  readData(&unk_65d9350, base, ptr);
}
