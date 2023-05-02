/**
 * Definition: td441bc83
 * Hash: d441bc83
 */

#include "td441bc83.h"

void td441bc83::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&tHeader, base, current);
  current = ptr + 0x14;
  readData(&unk_dce541c, base, current);
  current = ptr + 0x18;
  readData(&tPlayerTitle, base, current);
  ptr += 0x20;
}
