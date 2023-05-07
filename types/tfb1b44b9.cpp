/**
 * Definition: tfb1b44b9
 * Hash: fb1b44b9
 */

#include "tfb1b44b9.h"

void tfb1b44b9::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&szProgressTarget, base, current);
  current = ptr + 0x10;
  readData(&szForegroundChild, base, current);
  current = ptr + 0x20;
  readData(&unk_d25a883, base, current);
  current = ptr + 0x24;
  readData(&unk_e66a388, base, current);
  current = ptr + 0x28;
  readData(&unk_309438d, base, current);
  current = ptr + 0x2c;
  readData(&eSmoothing, base, current);
  current = ptr + 0x30;
  readData(&unk_58fbb1b, base, current);
  ptr += 0x38;
}
