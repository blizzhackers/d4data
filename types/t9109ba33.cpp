/**
 * Definition: t9109ba33
 * Hash: 9109ba33
 */

#include "t9109ba33.h"

void t9109ba33::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&unk_d80ac35, base, current);
  current = ptr + 0x8;
  readData(&unk_2707579, base, current);
  ptr += 0x18;
}
