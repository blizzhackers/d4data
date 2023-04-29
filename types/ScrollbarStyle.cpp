/**
 * Definition: ScrollbarStyle
 * Hash: c2aa895
 */

#include "ScrollbarStyle.h"

void ScrollbarStyle::read(const char* base, char* &ptr) {
  readData(&tElements, base, ptr);
}
