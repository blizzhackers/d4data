/**
 * Definition: SoundPlayHistory
 * Hash: e2d85811
 */

#include "SoundPlayHistory.h"

void SoundPlayHistory::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&nLastPlayedPerm, base, current);
  current = ptr + 0x4;
  readData(&flLastPlayedTime, base, current);
  current = ptr + 0x8;
  readData(&arPlayedFlags, base, current);
  ptr += 0x18;
}
