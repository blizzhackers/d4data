/**
 * Definition: tbf456a16
 * Hash: bf456a16
 */

#include "tbf456a16.h"

void tbf456a16::read(const char* base, char* &ptr) {
  readData(&nIndexOffset, base, ptr);
  readData(&nIndexCount, base, ptr);
}
