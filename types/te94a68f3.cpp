/**
 * Definition: te94a68f3
 * Hash: e94a68f3
 */

#include "te94a68f3.h"

void te94a68f3::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x8;
  readData(&dwType, base, current);
  current = ptr + 0xc;
  readData(&dwPad, base, current);
  ptr += 0x10;
}
