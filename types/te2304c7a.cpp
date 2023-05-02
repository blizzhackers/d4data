/**
 * Definition: te2304c7a
 * Hash: e2304c7a
 */

#include "te2304c7a.h"

void te2304c7a::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&tHeader, base, current);
  current = ptr + 0x10;
  readData(&unk_7e00c4d, base, current);
  ptr += 0x14;
}
