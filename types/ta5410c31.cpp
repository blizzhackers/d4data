/**
 * Definition: ta5410c31
 * Hash: a5410c31
 */

#include "ta5410c31.h"

void ta5410c31::read(const char* base, char* &ptr) {
  readData(&tHeader, base, ptr);
  readData(&unk_606dae5, base, ptr);
  readData(&bonus, base, ptr);
}
