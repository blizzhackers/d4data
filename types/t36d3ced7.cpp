/**
 * Definition: t36d3ced7
 * Hash: 36d3ced7
 */

#include "t36d3ced7.h"

void t36d3ced7::read(const char* base, char* &ptr) {
  ptr += 8;
  readData(&dwType, base, ptr);
  readData(&dwPad, base, ptr);
  readData(&tConditions, base, ptr);
  readData(&fGenerated, base, ptr);
  readData(&unk_6cba752, base, ptr);
  readData(&unk_e560b0b, base, ptr);
  readData(&snoMusic, base, ptr);
}
