/**
 * Definition: tcec13164
 * Hash: cec13164
 */

#include "tcec13164.h"

void tcec13164::read(const char* base, char* &ptr) {
  readData(&flTime, base, ptr);
  readData(&vScale, base, ptr);
}
