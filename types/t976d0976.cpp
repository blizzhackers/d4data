/**
 * Definition: t976d0976
 * Hash: 976d0976
 */

#include "t976d0976.h"

void t976d0976::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&snoFont, base, current);
  current = ptr + 0x4;
  readData(&dwFontSize, base, current);
  ptr += 0x8;
}
