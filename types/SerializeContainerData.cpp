/**
 * Definition: SerializeContainerData
 * Hash: 2afe3ba5
 */

#include "SerializeContainerData.h"

void SerializeContainerData::read(const char* base, char* &ptr) {
  readData(&dwOffset, base, ptr);
  readData(&dwSizeAndFlags, base, ptr);
  readData(&nCount, base, ptr);
  readData(&dwContainerFlags, base, ptr);
}
