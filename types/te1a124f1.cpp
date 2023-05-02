/**
 * Definition: te1a124f1
 * Hash: e1a124f1
 */

#include "te1a124f1.h"

void te1a124f1::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&szBoneName, base, current);
  current = ptr + 0x4;
  readData(&unk_fc40f9b, base, current);
  ptr += 0x8;
}
