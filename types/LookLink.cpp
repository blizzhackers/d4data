/**
 * Definition: LookLink
 * Hash: 8eb3e043
 */

#include "LookLink.h"

void LookLink::read(const char* base, char* &ptr) {
  readData(&dwLookHash, base, ptr);
}
