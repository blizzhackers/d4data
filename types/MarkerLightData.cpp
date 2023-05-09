/**
 * Definition: MarkerLightData
 * Hash: 37b71f34
 */

#include "MarkerLightData.h"

void MarkerLightData::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x8;
  readData(&dwType, base, current);
  current = ptr + 0xc;
  readData(&dwPad, base, current);
  current = ptr + 0x10;
  readData(&tInstanceData, base, current);
  current = ptr + 0x390;
  readData(&unk_ef69835, base, current);
  ptr += 0x398;
}
