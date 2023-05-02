/**
 * Definition: tef480d59
 * Hash: ef480d59
 */

#include "tef480d59.h"

void tef480d59::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&tHeader, base, current);
  current = ptr + 0x10;
  readData(&sampleIndex, base, current);
  ptr += 0x14;
}
