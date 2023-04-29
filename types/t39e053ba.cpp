/**
 * Definition: t39e053ba
 * Hash: 39e053ba
 */

#include "t39e053ba.h"

void t39e053ba::read(const char* base, char* &ptr) {
  ptr += 8;
  readData(&dwType, base, ptr);
  readData(&bNegate, base, ptr);
  readData(&unk_c0222bf, base, ptr);
  readData(&dwPad, base, ptr);
  readData(&unk_99e9721, base, ptr);
}
