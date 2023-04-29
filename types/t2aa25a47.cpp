/**
 * Definition: t2aa25a47
 * Hash: 2aa25a47
 */

#include "t2aa25a47.h"

void t2aa25a47::read(const char* base, char* &ptr) {
  readData(&tHeader, base, ptr);
  readData(&unk_ae25fc7, base, ptr);
  readData(&unk_cf0ad45, base, ptr);
}
