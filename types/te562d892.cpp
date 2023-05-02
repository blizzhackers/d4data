/**
 * Definition: te562d892
 * Hash: e562d892
 */

#include "te562d892.h"

void te562d892::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&unk_9a015a0, base, current);
  current = ptr + 0x50;
  readData(&unk_7a87372, base, current);
  current = ptr + 0xa0;
  readData(&unk_5611760, base, current);
  current = ptr + 0xf0;
  readData(&unk_5c74a81, base, current);
  ptr += 0xf4;
}
