/**
 * Definition: td17eb146
 * Hash: d17eb146
 */

#include "td17eb146.h"

void td17eb146::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&eVariantType, base, current);
  current = ptr + 0x4;
  readData(&unk_fbac894, base, current);
  ptr += 0x8;
}
