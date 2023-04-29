/**
 * Definition: td1145df1
 * Hash: d1145df1
 */

#include "td1145df1.h"

void td1145df1::read(const char* base, char* &ptr) {
  ptr += 8;
  readData(&dwType, base, ptr);
  readData(&dwPad, base, ptr);
  readData(&tConditions, base, ptr);
  readData(&fGenerated, base, ptr);
  readData(&unk_6cba752, base, ptr);
  readData(&unk_e560b0b, base, ptr);
  readData(&dwActorID, base, ptr);
  readData(&snoAppearance, base, ptr);
  readData(&tLookLink, base, ptr);
  readData(&unk_279aa5a, base, ptr);
}
