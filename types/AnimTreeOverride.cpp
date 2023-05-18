/**
 * Definition: AnimTreeOverride
 * Hash: b2f69ab5
 */

#include "AnimTreeOverride.h"

void AnimTreeOverride::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&unk_ae5d61d, base, current);
  ptr += 0x10;
}
