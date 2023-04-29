/**
 * Definition: tecff2185
 * Hash: ecff2185
 */

#include "tecff2185.h"

void tecff2185::read(const char* base, char* &ptr) {
  ptr += 8;
  readData(&dwType, base, ptr);
  readData(&dwPad, base, ptr);
  readData(&unk_d192efe, base, ptr);
}
