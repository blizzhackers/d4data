/**
 * Definition: t4bf73bfd
 * Hash: 4bf73bfd
 */

#include "t4bf73bfd.h"

void t4bf73bfd::read(const char* base, char* &ptr) {
  ptr += 8;
  readData(&dwType, base, ptr);
  readData(&dwPad, base, ptr);
  readData(&unk_9b2bc26, base, ptr);
}
