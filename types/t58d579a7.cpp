/**
 * Definition: t58d579a7
 * Hash: 58d579a7
 */

#include "t58d579a7.h"

void t58d579a7::read(const char* base, char* &ptr) {
  ptr += 8;
  readData(&dwType, base, ptr);
  readData(&dwPad, base, ptr);
  readData(&unk_3580552, base, ptr);
  readData(&unk_a3f1699, base, ptr);
}
