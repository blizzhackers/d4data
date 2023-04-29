/**
 * Definition: td2a2c805
 * Hash: d2a2c805
 */

#include "td2a2c805.h"

void td2a2c805::read(const char* base, char* &ptr) {
  readData(&tHeader, base, ptr);
  readData(&unk_ddfb7d6, base, ptr);
  readData(&bEnabled, base, ptr);
}
