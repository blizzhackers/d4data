/**
 * Definition: ta421b9d5
 * Hash: a421b9d5
 */

#include "ta421b9d5.h"

void ta421b9d5::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&unk_4fa6b4f, base, current);
  current = ptr + 0x14;
  readData(&unk_7f2f11f, base, current);
  ptr += 0x18;
}
