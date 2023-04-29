/**
 * Definition: t801e77f4
 * Hash: 801e77f4
 */

#include "t801e77f4.h"

void t801e77f4::read(const char* base, char* &ptr) {
  ptr += 8;
  readData(&dwType, base, ptr);
  readData(&dwPad, base, ptr);
  readData(&tConditions, base, ptr);
  readData(&fGenerated, base, ptr);
  readData(&unk_6cba752, base, ptr);
  readData(&unk_e560b0b, base, ptr);
  readData(&unk_279aa5a, base, ptr);
  readData(&dwActorID, base, ptr);
  readData(&unk_a8ee95c, base, ptr);
  readData(&unk_4bec6d2, base, ptr);
  readData(&unk_4c9ec22, base, ptr);
}
