/**
 * Definition: t25b4545f
 * Hash: 25b4545f
 */

#include "t25b4545f.h"

void t25b4545f::read(const char* base, char* &ptr) {
  ptr += 8;
  readData(&dwType, base, ptr);
  readData(&dwPad, base, ptr);
  readData(&unk_247a8fe, base, ptr);
  readData(&unk_a0febeb, base, ptr);
  readData(&tPhaseName, base, ptr);
  readData(&eContactFrame, base, ptr);
  readData(&bOptional, base, ptr);
}
