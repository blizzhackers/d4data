/**
 * Definition: t836c8dab
 * Hash: 836c8dab
 */

#include "t836c8dab.h"

void t836c8dab::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&bRound, base, current);
  current = ptr + 0x4;
  readData(&unk_a9f149e, base, current);
  ptr += 0x8;
}
