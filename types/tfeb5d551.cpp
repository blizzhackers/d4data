/**
 * Definition: tfeb5d551
 * Hash: feb5d551
 */

#include "tfeb5d551.h"

void tfeb5d551::read(const char* base, char* &ptr) {
  ptr += 8;
  readData(&dwType, base, ptr);
  readData(&dwPad, base, ptr);
  readData(&tConditions, base, ptr);
  readData(&fGenerated, base, ptr);
  readData(&unk_6cba752, base, ptr);
  readData(&unk_e560b0b, base, ptr);
  readData(&unk_9058b77, base, ptr);
  readData(&vecPosition, base, ptr);
}
