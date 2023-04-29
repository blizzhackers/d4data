/**
 * Definition: td5d78692
 * Hash: d5d78692
 */

#include "td5d78692.h"

void td5d78692::read(const char* base, char* &ptr) {
  readData(&tHeader, base, ptr);
  readData(&ann, base, ptr);
  readData(&unk_5692531, base, ptr);
}
