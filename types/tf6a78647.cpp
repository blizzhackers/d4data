/**
 * Definition: tf6a78647
 * Hash: f6a78647
 */

#include "tf6a78647.h"

void tf6a78647::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&nRequired, base, current);
  current = ptr + 0x4;
  readData(&snoAffix, base, current);
  ptr += 0x8;
}
