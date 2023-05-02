/**
 * Definition: tbd384884
 * Hash: bd384884
 */

#include "tbd384884.h"

void tbd384884::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&dwValue, base, current);
  current = ptr + 0x8;
  readData(&unk_e1df903, base, current);
  ptr += 0x18;
}
