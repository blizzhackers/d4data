/**
 * Definition: tc575fa49
 * Hash: c575fa49
 */

#include "tc575fa49.h"

void tc575fa49::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&unk_a402cfb, base, current);
  current = ptr + 0x1c;
  readData(&unk_80dc871, base, current);
  ptr += 0x28;
}
