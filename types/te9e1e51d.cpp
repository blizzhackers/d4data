/**
 * Definition: te9e1e51d
 * Hash: e9e1e51d
 */

#include "te9e1e51d.h"

void te9e1e51d::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&tHeader, base, current);
  current = ptr + 0x10;
  readData(&ann, base, current);
  current = ptr + 0x18;
  readData(&nChange, base, current);
  current = ptr + 0x1c;
  readData(&unk_6c0cb90, base, current);
  ptr += 0x20;
}
