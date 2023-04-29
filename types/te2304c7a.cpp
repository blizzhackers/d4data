/**
 * Definition: te2304c7a
 * Hash: e2304c7a
 */

#include "te2304c7a.h"

void te2304c7a::read(const char* base, char* &ptr) {
  readData(&tHeader, base, ptr);
  readData(&unk_7e00c4d, base, ptr);
}
