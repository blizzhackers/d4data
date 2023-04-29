/**
 * Definition: t8593c428
 * Hash: 8593c428
 */

#include "t8593c428.h"

void t8593c428::read(const char* base, char* &ptr) {
  ptr += 8;
  readData(&dwType, base, ptr);
  readData(&dwPad, base, ptr);
  readData(&unk_c9522b4, base, ptr);
  readData(&unk_6e07592, base, ptr);
  readData(&unk_91c65f5, base, ptr);
  readData(&unk_7d0510b, base, ptr);
  readData(&unk_b0f69e7, base, ptr);
}
