/**
 * Definition: t6e65a695
 * Hash: 6e65a695
 */

#include "t6e65a695.h"

void t6e65a695::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&snoActor, base, current);
  current = ptr + 0x4;
  readData(&unk_39baadf, base, current);
  current = ptr + 0x8;
  readData(&tVariant, base, current);
  ptr += 0x10;
}
