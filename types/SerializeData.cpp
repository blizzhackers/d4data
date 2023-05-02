/**
 * Definition: SerializeData
 * Hash: 9ce1b262
 */

#include "SerializeData.h"

void SerializeData::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&dwOffset, base, current);
  current = ptr + 0x4;
  readData(&dwSizeAndFlags, base, current);
  ptr += 0x8;
}
