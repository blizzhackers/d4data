/**
 * Definition: t439fbabf
 * Hash: 439fbabf
 */

#include "t439fbabf.h"

void t439fbabf::read(const char* base, char* &ptr) {
  ptr += 8;
  readData(&dwType, base, ptr);
  readData(&dwPad, base, ptr);
  readData(&tConditions, base, ptr);
  readData(&fGenerated, base, ptr);
  readData(&unk_6cba752, base, ptr);
  readData(&unk_e560b0b, base, ptr);
  readData(&szSubObjectName, base, ptr);
  readData(&bVisible, base, ptr);
}
