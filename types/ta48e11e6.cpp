/**
 * Definition: ta48e11e6
 * Hash: a48e11e6
 */

#include "ta48e11e6.h"

void ta48e11e6::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&unk_8855e60, base, current);
  current = ptr + 0x4;
  readData(&unk_4e47826, base, current);
  ptr += 0x8;
}
