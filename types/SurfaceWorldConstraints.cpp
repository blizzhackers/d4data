/**
 * Definition: SurfaceWorldConstraints
 * Hash: 7fdf4029
 */

#include "SurfaceWorldConstraints.h"

void SurfaceWorldConstraints::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x8;
  readData(&dwType, base, current);
  current = ptr + 0x10;
  readData(&unk_2de4987, base, current);
  current = ptr + 0x18;
  readData(&arConditions, base, current);
  current = ptr + 0x30;
  readData(&bEnd, base, current);
  current = ptr + 0x34;
  readData(&dwPad, base, current);
  ptr += 0x38;
}
