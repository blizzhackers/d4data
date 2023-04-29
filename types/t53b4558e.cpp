/**
 * Definition: t53b4558e
 * Hash: 53b4558e
 */

#include "t53b4558e.h"

void t53b4558e::read(const char* base, char* &ptr) {
  ptr += 8;
  readData(&dwType, base, ptr);
  readData(&dwPad, base, ptr);
  readData(&unk_247a8fe, base, ptr);
  readData(&unk_a0febeb, base, ptr);
  readData(&eContactFrame, base, ptr);
  readData(&bOptional, base, ptr);
}
