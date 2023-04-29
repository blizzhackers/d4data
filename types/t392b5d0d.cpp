/**
 * Definition: t392b5d0d
 * Hash: 392b5d0d
 */

#include "t392b5d0d.h"

void t392b5d0d::read(const char* base, char* &ptr) {
  readData(&tHeader, base, ptr);
  readData(&tItemId, base, ptr);
  readData(&ann, base, ptr);
}
