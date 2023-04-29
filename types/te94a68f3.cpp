/**
 * Definition: te94a68f3
 * Hash: e94a68f3
 */

#include "te94a68f3.h"

void te94a68f3::read(const char* base, char* &ptr) {
  ptr += 8;
  readData(&dwType, base, ptr);
  readData(&dwPad, base, ptr);
}
