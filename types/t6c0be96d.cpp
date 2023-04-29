/**
 * Definition: t6c0be96d
 * Hash: 6c0be96d
 */

#include "t6c0be96d.h"

void t6c0be96d::read(const char* base, char* &ptr) {
  readData(&tHeader, base, ptr);
  readData(&snoScroll, base, ptr);
  readData(&unk_2bf0136, base, ptr);
}
