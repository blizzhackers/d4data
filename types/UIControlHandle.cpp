/**
 * Definition: UIControlHandle
 * Hash: b6a07fab
 */

#include "UIControlHandle.h"

void UIControlHandle::read(const char* base, char* &ptr) {
  readData(&snoUI, base, ptr);
  readData(&szControlName, base, ptr);
}
