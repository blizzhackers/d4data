/**
 * Definition: SurfaceGridPrimitive
 * Hash: fdf29888
 */

#include "SurfaceGridPrimitive.h"

void SurfaceGridPrimitive::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&dwHeight, base, current);
  current = ptr + 0x4;
  readData(&snoSurface, base, current);
  ptr += 0x8;
}
