/**
 * Definition: ta8a0c923
 * Hash: a8a0c923
 */

#include "ta8a0c923.h"

void ta8a0c923::read(const char* base, char* &ptr) {
  ptr += 8;
  readData(&dwType, base, ptr);
  readData(&dwPad, base, ptr);
  readData(&tConditions, base, ptr);
  readData(&fGenerated, base, ptr);
  readData(&unk_6cba752, base, ptr);
  readData(&unk_e560b0b, base, ptr);
}
