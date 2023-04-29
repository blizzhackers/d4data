/**
 * Definition: td441bc83
 * Hash: d441bc83
 */

#include "td441bc83.h"

void td441bc83::read(const char* base, char* &ptr) {
  readData(&tHeader, base, ptr);
  readData(&unk_dce541c, base, ptr);
  readData(&tPlayerTitle, base, ptr);
}
