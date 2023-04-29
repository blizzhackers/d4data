/**
 * Definition: te67bed05
 * Hash: e67bed05
 */

#include "te67bed05.h"

void te67bed05::read(const char* base, char* &ptr) {
  ptr += 8;
  readData(&dwType, base, ptr);
  readData(&dwPad, base, ptr);
  readData(&unk_828d6cf, base, ptr);
  readData(&unk_a7dff70, base, ptr);
  readData(&flUTransInitial, base, ptr);
  readData(&unk_803e8a7, base, ptr);
  readData(&flVTransInitial, base, ptr);
  readData(&unk_42b1708, base, ptr);
  readData(&ePinTranslation, base, ptr);
  readData(&unk_4a1b252, base, ptr);
  readData(&unk_96b1a52, base, ptr);
  readData(&unk_ec7cf93, base, ptr);
  readData(&dwAnimFlags, base, ptr);
  readData(&unk_e5b0c7f, base, ptr);
  readData(&fXOffset, base, ptr);
  readData(&fYOffset, base, ptr);
  readData(&unk_95a8bdb, base, ptr);
  readData(&unk_85c824d, base, ptr);
}
