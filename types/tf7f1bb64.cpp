/**
 * Definition: tf7f1bb64
 * Hash: f7f1bb64
 */

#include "tf7f1bb64.h"

void tf7f1bb64::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&tHeader, base, current);
  current = ptr + 0x10;
  readData(&unk_70bf7e7, base, current);
  current = ptr + 0x14;
  readData(&unk_ebf7690, base, current);
  ptr += 0x1c;
}
