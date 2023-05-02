/**
 * Definition: td8c433c4
 * Hash: d8c433c4
 */

#include "td8c433c4.h"

void td8c433c4::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&tHeader, base, current);
  current = ptr + 0x10;
  readData(&eSlot, base, current);
  current = ptr + 0x14;
  readData(&unk_7d12b0, base, current);
  ptr += 0x18;
}
