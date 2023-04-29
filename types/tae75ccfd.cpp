/**
 * Definition: tae75ccfd
 * Hash: ae75ccfd
 */

#include "tae75ccfd.h"

void tae75ccfd::read(const char* base, char* &ptr) {
  ptr += 8;
  readData(&dwType, base, ptr);
  readData(&dwPad, base, ptr);
  readData(&tConditions, base, ptr);
  readData(&fGenerated, base, ptr);
  readData(&unk_6cba752, base, ptr);
  readData(&unk_e560b0b, base, ptr);
  readData(&unk_77f81b0, base, ptr);
  readData(&unk_1af83a1, base, ptr);
}
