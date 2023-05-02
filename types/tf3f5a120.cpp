/**
 * Definition: tf3f5a120
 * Hash: f3f5a120
 */

#include "tf3f5a120.h"

void tf3f5a120::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&szOnKey, base, current);
  current = ptr + 0x10;
  readData(&unk_147ed31, base, current);
  ptr += 0x18;
}
