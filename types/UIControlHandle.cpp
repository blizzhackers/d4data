/**
 * Definition: UIControlHandle
 * Hash: b6a07fab
 */

#include "UIControlHandle.h"

void UIControlHandle::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&snoUI, base, current);
  current = ptr + 0x4;
  readData(&szControlName, base, current);
  ptr += 0x8;
}
