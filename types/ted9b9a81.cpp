/**
 * Definition: ted9b9a81
 * Hash: ed9b9a81
 */

#include "ted9b9a81.h"

void ted9b9a81::read(const char* base, char* &ptr) {
  ptr += 8;
  readData(&dwType, base, ptr);
  readData(&dwPad, base, ptr);
  readData(&szLabel, base, ptr);
  readData(&unk_590b8b, base, ptr);
  readData(&fHidden, base, ptr);
}
