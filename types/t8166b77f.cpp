/**
 * Definition: t8166b77f
 * Hash: 8166b77f
 */

#include "t8166b77f.h"

void t8166b77f::read(const char* base, char* &ptr) {
  ptr += 8;
  readData(&dwType, base, ptr);
  readData(&dwPad, base, ptr);
  readData(&unk_247a8fe, base, ptr);
  readData(&arConditions, base, ptr);
  readData(&tInterval, base, ptr);
  readData(&unk_b7bb063, base, ptr);
  readData(&unk_dac1f5d, base, ptr);
}
