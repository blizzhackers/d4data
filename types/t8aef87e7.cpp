/**
 * Definition: t8aef87e7
 * Hash: 8aef87e7
 */

#include "t8aef87e7.h"

void t8aef87e7::read(const char* base, char* &ptr) {
  readData(&height, base, ptr);
  readData(&material, base, ptr);
  readData(&gameFlags, base, ptr);
  readData(&unk_38adf8e, base, ptr);
}
