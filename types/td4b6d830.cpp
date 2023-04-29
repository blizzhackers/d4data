/**
 * Definition: td4b6d830
 * Hash: d4b6d830
 */

#include "td4b6d830.h"

void td4b6d830::read(const char* base, char* &ptr) {
  readData(&tHeader, base, ptr);
  readData(&unk_dce541c, base, ptr);
  readData(&unk_41f8768, base, ptr);
}
