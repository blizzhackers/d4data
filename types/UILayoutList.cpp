/**
 * Definition: UILayoutList
 * Hash: c36fb4b8
 */

#include "UILayoutList.h"

void UILayoutList::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&arEntries, base, current);
  ptr += 0x10;
}
