/**
 * Definition: t2fb814f6
 * Hash: 2fb814f6
 */

#include "t2fb814f6.h"

void t2fb814f6::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&tHeader, base, current);
  current = ptr + 0x10;
  readData(&unk_99e9721, base, current);
  ptr += 0x14;
}
