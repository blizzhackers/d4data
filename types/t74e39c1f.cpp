/**
 * Definition: t74e39c1f
 * Hash: 74e39c1f
 */

#include "t74e39c1f.h"

void t74e39c1f::read(const char* base, char* &ptr) {
  readData(&tHeader, base, ptr);
  readData(&unk_993dfc2, base, ptr);
  readData(&tTransform, base, ptr);
}
