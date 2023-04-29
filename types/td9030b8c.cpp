/**
 * Definition: td9030b8c
 * Hash: d9030b8c
 */

#include "td9030b8c.h"

void td9030b8c::read(const char* base, char* &ptr) {
  ptr += 8;
  readData(&dwType, base, ptr);
  readData(&dwPad, base, ptr);
  readData(&unk_5460da3, base, ptr);
  readData(&unk_297c737, base, ptr);
  readData(&unk_65250c9, base, ptr);
}
