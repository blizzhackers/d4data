/**
 * Definition: td3c73333
 * Hash: d3c73333
 */

#include "td3c73333.h"

void td3c73333::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&snoActor, base, current);
  current = ptr + 0x4;
  readData(&dwTag, base, current);
  current = ptr + 0x8;
  readData(&unk_c063965, base, current);
  ptr += 0x10;
}
