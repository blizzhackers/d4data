/**
 * Definition: tccd96a71
 * Hash: ccd96a71
 */

#include "tccd96a71.h"

void tccd96a71::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&unk_a2bea27, base, current);
  current = ptr + 0x8;
  readData(&unk_784700d, base, current);
  ptr += 0x18;
}
