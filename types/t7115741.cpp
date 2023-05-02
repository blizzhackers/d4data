/**
 * Definition: t7115741
 * Hash: 7115741
 */

#include "t7115741.h"

void t7115741::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&dwID, base, current);
  current = ptr + 0x8;
  readData(&arCategories, base, current);
  current = ptr + 0x18;
  readData(&unk_4e65fff, base, current);
  current = ptr + 0x28;
  readData(&uFlags, base, current);
  ptr += 0x30;
}
