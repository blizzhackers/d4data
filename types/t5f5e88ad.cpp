/**
 * Definition: t5f5e88ad
 * Hash: 5f5e88ad
 */

#include "t5f5e88ad.h"

void t5f5e88ad::read(const char* base, char* &ptr) {
  readData(&nFrameStart, base, ptr);
  readData(&nFrameEnd, base, ptr);
  readData(&unk_f28aa5a, base, ptr);
  readData(&unk_963cba8, base, ptr);
  readData(&unk_65d9350, base, ptr);
  readData(&unk_6ebf840, base, ptr);
}
