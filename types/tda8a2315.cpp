/**
 * Definition: tda8a2315
 * Hash: da8a2315
 */

#include "tda8a2315.h"

void tda8a2315::read(const char* base, char* &ptr) {
  readData(&unk_6c68319, base, ptr);
  readData(&unk_d64b2c9, base, ptr);
  readData(&snoSummonPower, base, ptr);
  readData(&tMarkerHandle, base, ptr);
  readData(&eVisibility, base, ptr);
  readData(&unk_209d19e, base, ptr);
}
