/**
 * Definition: td5d78692
 * Hash: d5d78692
 */

#include "td5d78692.h"

void td5d78692::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&tHeader, base, current);
  current = ptr + 0x10;
  readData(&ann, base, current);
  current = ptr + 0x18;
  readData(&unk_5692531, base, current);
  ptr += 0x24;
}
