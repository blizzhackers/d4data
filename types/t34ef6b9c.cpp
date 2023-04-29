/**
 * Definition: t34ef6b9c
 * Hash: 34ef6b9c
 */

#include "t34ef6b9c.h"

void t34ef6b9c::read(const char* base, char* &ptr) {
  readData(&tHeader, base, ptr);
  readData(&annItem, base, ptr);
  readData(&unk_af3bfcb, base, ptr);
}
