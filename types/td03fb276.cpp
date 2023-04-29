/**
 * Definition: td03fb276
 * Hash: d03fb276
 */

#include "td03fb276.h"

void td03fb276::read(const char* base, char* &ptr) {
  ptr += 8;
  readData(&dwType, base, ptr);
  readData(&dwPad, base, ptr);
  readData(&tConditions, base, ptr);
  readData(&fGenerated, base, ptr);
  readData(&unk_6cba752, base, ptr);
  readData(&unk_e560b0b, base, ptr);
  readData(&dwObjectID, base, ptr);
}
