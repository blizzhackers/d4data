/**
 * Definition: t7115741
 * Hash: 7115741
 */

#include "t7115741.h"

void t7115741::read(const char* base, char* &ptr) {
  readData(&dwID, base, ptr);
  readData(&arCategories, base, ptr);
  readData(&unk_4e65fff, base, ptr);
  readData(&uFlags, base, ptr);
}
