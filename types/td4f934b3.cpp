/**
 * Definition: td4f934b3
 * Hash: d4f934b3
 */

#include "td4f934b3.h"

void td4f934b3::read(const char* base, char* &ptr) {
  ptr += 8;
  readData(&dwType, base, ptr);
  readData(&dwPad, base, ptr);
  readData(&tConditions, base, ptr);
  readData(&fGenerated, base, ptr);
  readData(&unk_6cba752, base, ptr);
  readData(&unk_e560b0b, base, ptr);
  readData(&unk_8dea4d9, base, ptr);
  readData(&nFadeGroup, base, ptr);
  readData(&eBehavior, base, ptr);
  readData(&unk_2b48a58, base, ptr);
}
