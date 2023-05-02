/**
 * Definition: te792ade3
 * Hash: e792ade3
 */

#include "te792ade3.h"

void te792ade3::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&dwID, base, current);
  current = ptr + 0x4;
  readData(&snoQuestChain, base, current);
  ptr += 0x8;
}
