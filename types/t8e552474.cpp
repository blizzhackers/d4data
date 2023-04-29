/**
 * Definition: t8e552474
 * Hash: 8e552474
 */

#include "t8e552474.h"

void t8e552474::read(const char* base, char* &ptr) {
  ptr += 8;
  readData(&dwType, base, ptr);
  readData(&bNegate, base, ptr);
  readData(&unk_c0222bf, base, ptr);
  readData(&dwPad, base, ptr);
  readData(&unk_6ea5eed, base, ptr);
}
