/**
 * Definition: td4235100
 * Hash: d4235100
 */

#include "td4235100.h"

void td4235100::read(const char* base, char* &ptr) {
  readData(&snoActor, base, ptr);
  readData(&unk_15efd3, base, ptr);
}
