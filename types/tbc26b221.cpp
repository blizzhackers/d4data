/**
 * Definition: tbc26b221
 * Hash: bc26b221
 */

#include "tbc26b221.h"

void tbc26b221::read(const char* base, char* &ptr) {
  ptr += 8;
  readData(&dwType, base, ptr);
  readData(&dwPad, base, ptr);
  readData(&tConditions, base, ptr);
  readData(&fGenerated, base, ptr);
  readData(&unk_6cba752, base, ptr);
  readData(&unk_e560b0b, base, ptr);
  readData(&unk_85269a4, base, ptr);
  readData(&dwObjectID, base, ptr);
  readData(&arKeys, base, ptr);
  readData(&unk_9717a7e, base, ptr);
}
