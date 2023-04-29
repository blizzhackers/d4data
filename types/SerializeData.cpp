/**
 * Definition: SerializeData
 * Hash: 9ce1b262
 */

#include "SerializeData.h"

void SerializeData::read(const char* base, char* &ptr) {
  readData(&dwOffset, base, ptr);
  readData(&dwSizeAndFlags, base, ptr);
}
