/**
 * Definition: tfdf29888
 * Hash: fdf29888
 */

#include "tfdf29888.h"

void tfdf29888::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&dwHeight, base, current);
  current = ptr + 0x4;
  readData(&snoSurface, base, current);
  ptr += 0x8;
}
