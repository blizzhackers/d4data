/**
 * Definition: t5290186d
 * Hash: 5290186d
 */

#include "t5290186d.h"

void t5290186d::read(const char* base, char* &ptr) {
  readData(&tHeader, base, ptr);
  readData(&unk_2883a68, base, ptr);
  readData(&annItem, base, ptr);
}
