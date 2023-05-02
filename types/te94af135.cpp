/**
 * Definition: te94af135
 * Hash: e94af135
 */

#include "te94af135.h"

void te94af135::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&szName, base, current);
  current = ptr + 0x4;
  readData(&hLabel, base, current);
  current = ptr + 0xc;
  readData(&rgbaColor, base, current);
  ptr += 0x10;
}
