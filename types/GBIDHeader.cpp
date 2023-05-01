/**
 * Definition: GBIDHeader
 * Hash: a78f399f
 */

#include "GBIDHeader.h"

void GBIDHeader::read(const char* base, char* &ptr) {
  readData(&szName, base, ptr);
  readData(&gbid, base, ptr);
}
