/**
 * Definition: td8c433c4
 * Hash: d8c433c4
 */

#include "td8c433c4.h"

void td8c433c4::read(const char* base, char* &ptr) {
  readData(&tHeader, base, ptr);
  readData(&eSlot, base, ptr);
  readData(&unk_7d12b0, base, ptr);
}
