/**
 * Definition: te11de1bb
 * Hash: e11de1bb
 */

#include "te11de1bb.h"

void te11de1bb::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&snoActor, base, current);
  current = ptr + 0x4;
  readData(&unk_d5e3388, base, current);
  ptr += 0xc;
}
