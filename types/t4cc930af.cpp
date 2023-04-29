/**
 * Definition: t4cc930af
 * Hash: 4cc930af
 */

#include "t4cc930af.h"

void t4cc930af::read(const char* base, char* &ptr) {
  ptr += 8;
  readData(&dwType, base, ptr);
  readData(&dwPad, base, ptr);
  readData(&tConditions, base, ptr);
  readData(&fGenerated, base, ptr);
  readData(&unk_6cba752, base, ptr);
  readData(&unk_e560b0b, base, ptr);
  readData(&tConstraintLink, base, ptr);
  readData(&tHardpointLink, base, ptr);
}
