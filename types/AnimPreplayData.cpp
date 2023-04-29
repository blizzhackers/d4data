/**
 * Definition: AnimPreplayData
 * Hash: 8072d75c
 */

#include "AnimPreplayData.h"

void AnimPreplayData::read(const char* base, char* &ptr) {
  readData(&dwAnimPrePlayDataFlags, base, ptr);
  readData(&dwServerTimeAnimStarted, base, ptr);
  readData(&dwSyncedSeed, base, ptr);
  readData(&unk_7e38ab5, base, ptr);
}
