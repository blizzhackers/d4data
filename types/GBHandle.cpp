/**
 * Definition: GBHandle
 * Hash: dd273b5
 */

#include "GBHandle.h"

void GBHandle::read(const char* base, char* &ptr) {
  readData(&eType, base, ptr);
  readData(&gbid, base, ptr);
}
