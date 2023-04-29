/**
 * Definition: t288a8c0b
 * Hash: 288a8c0b
 */

#include "t288a8c0b.h"

void t288a8c0b::read(const char* base, char* &ptr) {
  readData(&tHeader, base, ptr);
  readData(&unk_7e407c7, base, ptr);
  readData(&unk_dce541c, base, ptr);
}
