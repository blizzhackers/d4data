/**
 * Definition: t5b95dd21
 * Hash: 5b95dd21
 */

#include "t5b95dd21.h"

void t5b95dd21::read(const char* base, char* &ptr) {
  readData(&eSemantic, base, ptr);
  readData(&eFormat, base, ptr);
  readData(&nOffset, base, ptr);
}
