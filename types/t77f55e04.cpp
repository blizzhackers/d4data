/**
 * Definition: t77f55e04
 * Hash: 77f55e04
 */

#include "t77f55e04.h"

void t77f55e04::read(const char* base, char* &ptr) {
  ptr += 8;
  readData(&dwType, base, ptr);
  readData(&dwPad, base, ptr);
  readData(&unk_247a8fe, base, ptr);
  readData(&unk_a0febeb, base, ptr);
}
