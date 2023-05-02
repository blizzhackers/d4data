/**
 * Definition: GBIDHeader
 * Hash: a78f399f
 */

#include "GBIDHeader.h"

void GBIDHeader::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&szName, base, current);
  current = ptr + 0x100;
  readData(&gbid, base, current);
  ptr += 0x104;
}
