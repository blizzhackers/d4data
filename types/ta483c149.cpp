/**
 * Definition: ta483c149
 * Hash: a483c149
 */

#include "ta483c149.h"

void ta483c149::read(const char* base, char* &ptr) {
  readData(&tHeader, base, ptr);
  readData(&vRMessage, base, ptr);
}
