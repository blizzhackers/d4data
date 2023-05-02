/**
 * Definition: t5eb6ade
 * Hash: 5eb6ade
 */

#include "t5eb6ade.h"

void t5eb6ade::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&unk_a1d7e72, base, current);
  current = ptr + 0x8;
  readData(&unk_bd1644f, base, current);
  current = ptr + 0xc;
  readData(&flWeight, base, current);
  ptr += 0x10;
}
