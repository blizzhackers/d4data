/**
 * Definition: tf74028c3
 * Hash: f74028c3
 */

#include "tf74028c3.h"

void tf74028c3::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&unk_a253b80, base, current);
  current = ptr + 0x18;
  readData(&ptComponents, base, current);
  ptr += 0x28;
}
