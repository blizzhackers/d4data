/**
 * Definition: t56bf0569
 * Hash: 56bf0569
 */

#include "t56bf0569.h"

void t56bf0569::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&unk_b9550a0, base, current);
  current = ptr + 0x8;
  readData(&unk_a3efcf, base, current);
  ptr += 0x18;
}
