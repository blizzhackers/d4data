/**
 * Definition: te852fd63
 * Hash: e852fd63
 */

#include "te852fd63.h"

void te852fd63::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&flTime, base, current);
  current = ptr + 0x4;
  readData(&flValue, base, current);
  current = ptr + 0x8;
  readData(&unk_5fd7226, base, current);
  current = ptr + 0x10;
  readData(&unk_f044887, base, current);
  ptr += 0x18;
}
