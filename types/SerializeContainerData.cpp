/**
 * Definition: SerializeContainerData
 * Hash: 2afe3ba5
 */

#include "SerializeContainerData.h"

void SerializeContainerData::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&dwOffset, base, current);
  current = ptr + 0x4;
  readData(&dwSizeAndFlags, base, current);
  current = ptr + 0x8;
  readData(&nCount, base, current);
  current = ptr + 0xc;
  readData(&dwContainerFlags, base, current);
  ptr += 0x10;
}
