/**
 * Definition: tdb797d73
 * Hash: db797d73
 */

#include "tdb797d73.h"

void tdb797d73::read(const char* base, char* &ptr) {
  readData(&wpLocation, base, ptr);
  readData(&unk_dce541c, base, ptr);
  readData(&tEnterKnownLookOverrides, base, ptr);
  readData(&unk_c76aca7, base, ptr);
}
