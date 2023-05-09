/**
 * Definition: MarkerSoundData
 * Hash: 3335f1c5
 */

#include "MarkerSoundData.h"

void MarkerSoundData::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x8;
  readData(&dwType, base, current);
  current = ptr + 0xc;
  readData(&dwPad, base, current);
  ptr += 0x10;
}
