/**
 * Definition: IconScale
 * Hash: fc1f3f71
 */

#include "IconScale.h"

void IconScale::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&unk_19dc976, base, current);
  ptr += 0x10;
}
