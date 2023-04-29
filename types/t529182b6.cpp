/**
 * Definition: t529182b6
 * Hash: 529182b6
 */

#include "t529182b6.h"

void t529182b6::read(const char* base, char* &ptr) {
  ptr += 8;
  readData(&dwType, base, ptr);
  readData(&dwPad, base, ptr);
  readData(&unk_90afea4, base, ptr);
  readData(&unk_4bf3f6b, base, ptr);
  readData(&unk_9411612, base, ptr);
  readData(&unk_b0425e7, base, ptr);
}
