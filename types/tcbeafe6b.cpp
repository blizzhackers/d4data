/**
 * Definition: tcbeafe6b
 * Hash: cbeafe6b
 */

#include "tcbeafe6b.h"

void tcbeafe6b::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&tHeader, base, current);
  current = ptr + 0x10;
  readData(&unk_4675a7c, base, current);
  current = ptr + 0x14;
  readData(&unk_5f40a5f, base, current);
  current = ptr + 0x18;
  readData(&unk_7882c15, base, current);
  ptr += 0x21c;
}
