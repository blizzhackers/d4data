/**
 * Definition: ScrollbarStyle
 * Hash: c2aa895
 */

#include "ScrollbarStyle.h"

void ScrollbarStyle::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&tElements, base, current);
  ptr += 0x3c;
}
