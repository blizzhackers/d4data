/**
 * Definition: ta6f0b816
 * Hash: a6f0b816
 */

#include "ta6f0b816.h"

void ta6f0b816::read(const char* base, char* &ptr) {
  ptr += 8;
  readData(&dwType, base, ptr);
  readData(&dwPad, base, ptr);
  readData(&tConditions, base, ptr);
  readData(&fGenerated, base, ptr);
  readData(&unk_6cba752, base, ptr);
  readData(&unk_e560b0b, base, ptr);
  readData(&unk_adbc22e, base, ptr);
  readData(&dwActorID, base, ptr);
  readData(&dwID, base, ptr);
  readData(&unk_957fe32, base, ptr);
  readData(&unk_733c15d, base, ptr);
}
