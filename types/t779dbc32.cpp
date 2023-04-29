/**
 * Definition: t779dbc32
 * Hash: 779dbc32
 */

#include "t779dbc32.h"

void t779dbc32::read(const char* base, char* &ptr) {
  ptr += 8;
  readData(&dwType, base, ptr);
  readData(&dwPad, base, ptr);
  readData(&tConditions, base, ptr);
  readData(&fGenerated, base, ptr);
  readData(&unk_6cba752, base, ptr);
  readData(&unk_e560b0b, base, ptr);
  readData(&unk_279aa5a, base, ptr);
  readData(&dwActorID, base, ptr);
  readData(&bSheathed, base, ptr);
}
