/**
 * Definition: t96ebc824
 * Hash: 96ebc824
 */

#include "t96ebc824.h"

void t96ebc824::read(const char* base, char* &ptr) {
  ptr += 8;
  readData(&dwType, base, ptr);
  readData(&dwPad, base, ptr);
  readData(&unk_247a8fe, base, ptr);
  readData(&unk_a0febeb, base, ptr);
}
