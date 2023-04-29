/**
 * Definition: te9e1e51d
 * Hash: e9e1e51d
 */

#include "te9e1e51d.h"

void te9e1e51d::read(const char* base, char* &ptr) {
  readData(&tHeader, base, ptr);
  readData(&ann, base, ptr);
  readData(&nChange, base, ptr);
  readData(&unk_6c0cb90, base, ptr);
}
