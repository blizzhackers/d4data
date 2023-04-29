/**
 * Definition: tfe3dfadd
 * Hash: fe3dfadd
 */

#include "tfe3dfadd.h"

void tfe3dfadd::read(const char* base, char* &ptr) {
  readData(&tHeader, base, ptr);
  readData(&unk_ddfb7d6, base, ptr);
  readData(&unk_526a589, base, ptr);
  readData(&flCooldown, base, ptr);
}
