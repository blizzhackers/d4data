/**
 * Definition: tfe3dfadd
 * Hash: fe3dfadd
 */

#include "tfe3dfadd.h"

void tfe3dfadd::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&tHeader, base, current);
  current = ptr + 0x10;
  readData(&unk_ddfb7d6, base, current);
  current = ptr + 0x18;
  readData(&unk_526a589, base, current);
  current = ptr + 0x20;
  readData(&flCooldown, base, current);
  ptr += 0x28;
}
