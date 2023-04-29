/**
 * Definition: te852fd63
 * Hash: e852fd63
 */

#include "te852fd63.h"

void te852fd63::read(const char* base, char* &ptr) {
  readData(&flTime, base, ptr);
  readData(&flValue, base, ptr);
  readData(&unk_5fd7226, base, ptr);
  readData(&unk_f044887, base, ptr);
}
