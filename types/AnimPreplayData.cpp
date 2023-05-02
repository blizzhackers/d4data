/**
 * Definition: AnimPreplayData
 * Hash: 8072d75c
 */

#include "AnimPreplayData.h"

void AnimPreplayData::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&dwAnimPrePlayDataFlags, base, current);
  current = ptr + 0x4;
  readData(&dwServerTimeAnimStarted, base, current);
  current = ptr + 0x8;
  readData(&dwSyncedSeed, base, current);
  current = ptr + 0xc;
  readData(&unk_7e38ab5, base, current);
  ptr += 0x14;
}
