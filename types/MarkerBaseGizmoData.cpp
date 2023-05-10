/**
 * Definition: MarkerBaseGizmoData
 * Hash: 23a7215d
 */

#include "MarkerBaseGizmoData.h"

void MarkerBaseGizmoData::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&unk_bf69fb1, base, current);
  current = ptr + 0x4;
  readData(&unk_2387505, base, current);
  ptr += 0x8;
}
