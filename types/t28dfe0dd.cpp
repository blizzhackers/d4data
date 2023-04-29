/**
 * Definition: t28dfe0dd
 * Hash: 28dfe0dd
 */

#include "t28dfe0dd.h"

void t28dfe0dd::read(const char* base, char* &ptr) {
  ptr += 8;
  readData(&dwType, base, ptr);
  readData(&dwPad, base, ptr);
  readData(&unk_d1e17f4, base, ptr);
  readData(&pathBoxExtents, base, ptr);
}
