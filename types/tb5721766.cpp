/**
 * Definition: tb5721766
 * Hash: b5721766
 */

#include "tb5721766.h"

void tb5721766::read(const char* base, char* &ptr) {
  readData(&value, base, ptr);
  readData(&unk_b5a2c78, base, ptr);
  readData(&unk_411da82, base, ptr);
}
