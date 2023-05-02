/**
 * Definition: tf32c2fd9
 * Hash: f32c2fd9
 */

#include "tf32c2fd9.h"

void tf32c2fd9::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&unk_3d62da6, base, current);
  current = ptr + 0x18;
  readData(&unk_8ffea83, base, current);
  current = ptr + 0x1c;
  readData(&unk_6f9a204, base, current);
  ptr += 0x20;
}
