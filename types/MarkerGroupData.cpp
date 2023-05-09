/**
 * Definition: MarkerGroupData
 * Hash: c575fa49
 */

#include "MarkerGroupData.h"

void MarkerGroupData::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&tLocalTransform, base, current);
  current = ptr + 0x1c;
  readData(&unk_80dc871, base, current);
  ptr += 0x28;
}
