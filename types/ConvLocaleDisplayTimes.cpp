/**
 * Definition: ConvLocaleDisplayTimes
 * Hash: 1857ecfe
 */

#include "ConvLocaleDisplayTimes.h"

void ConvLocaleDisplayTimes::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&unk_c63857, base, current);
  ptr += 0x28;
}
