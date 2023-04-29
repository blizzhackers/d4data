/**
 * Definition: tc52febeb
 * Hash: c52febeb
 */

#include "tc52febeb.h"

void tc52febeb::read(const char* base, char* &ptr) {
  readData(&tHeader, base, ptr);
  readData(&unk_ddfb7d6, base, ptr);
  readData(&unk_526a589, base, ptr);
  readData(&nIndex, base, ptr);
  readData(&unk_de06696, base, ptr);
  readData(&bEnabled, base, ptr);
}
