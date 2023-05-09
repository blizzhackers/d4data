/**
 * Definition: GlobalFontColor
 * Hash: 1d865fc7
 */

#include "GlobalFontColor.h"

void GlobalFontColor::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&szToken, base, current);
  current = ptr + 0x4;
  readData(&rgbaColor, base, current);
  ptr += 0x8;
}
