/**
 * Definition: ta192727f
 * Hash: a192727f
 */

#include "ta192727f.h"

void ta192727f::read(const char* base, char* &ptr) {
  readData(&tHeader, base, ptr);
  readData(&unk_70bf7e7, base, ptr);
}
