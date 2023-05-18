/**
 * Definition: UIStyleResource
 * Hash: d8a9e2b7
 */

#include "UIStyleResource.h"

void UIStyleResource::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&szStyleName, base, current);
  current = ptr + 0x10;
  readData(&nKey, base, current);
  current = ptr + 0x18;
  readData(&ptStyle, base, current);
  ptr += 0x30;
}
