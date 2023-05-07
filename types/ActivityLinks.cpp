/**
 * Definition: ActivityLinks
 * Hash: c5310cce
 */

#include "ActivityLinks.h"

void ActivityLinks::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&unk_627adad, base, current);
  ptr += 0x10;
}
