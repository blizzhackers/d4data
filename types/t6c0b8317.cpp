/**
 * Definition: t6c0b8317
 * Hash: 6c0b8317
 */

#include "t6c0b8317.h"

void t6c0b8317::read(const char* base, char* &ptr) {
  readData(&tHeader, base, ptr);
  readData(&unk_eeaddc2, base, ptr);
}
