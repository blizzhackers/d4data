/**
 * Definition: tcec13164
 * Hash: cec13164
 */

#include "tcec13164.h"

void tcec13164::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&flTime, base, current);
  current = ptr + 0x4;
  readData(&vScale, base, current);
  ptr += 0x10;
}
