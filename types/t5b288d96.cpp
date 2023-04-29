/**
 * Definition: t5b288d96
 * Hash: 5b288d96
 */

#include "t5b288d96.h"

void t5b288d96::read(const char* base, char* &ptr) {
  readData(&tHeader, base, ptr);
  readData(&unk_ddfb7d6, base, ptr);
  readData(&bEnabled, base, ptr);
  readData(&unk_526a589, base, ptr);
}
