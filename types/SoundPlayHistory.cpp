/**
 * Definition: SoundPlayHistory
 * Hash: e2d85811
 */

#include "SoundPlayHistory.h"

void SoundPlayHistory::read(const char* base, char* &ptr) {
  readData(&nLastPlayedPerm, base, ptr);
  readData(&unk_6980cd4, base, ptr);
  readData(&arPlayedFlags, base, ptr);
}
