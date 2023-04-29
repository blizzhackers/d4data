/**
 * Definition: tfb7ded7f
 * Hash: fb7ded7f
 */

#include "tfb7ded7f.h"

void tfb7ded7f::read(const char* base, char* &ptr) {
  ptr += 8;
  readData(&dwType, base, ptr);
  readData(&dwPad, base, ptr);
  readData(&unk_d192efe, base, ptr);
}
