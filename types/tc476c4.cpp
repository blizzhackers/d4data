/**
 * Definition: tc476c4
 * Hash: c476c4
 */

#include "tc476c4.h"

void tc476c4::read(const char* base, char* &ptr) {
  readData(&tHeader, base, ptr);
  readData(&unk_dce541c, base, ptr);
  readData(&unk_b70ce55, base, ptr);
}
