/**
 * Definition: t243c3af4
 * Hash: 243c3af4
 */

#include "t243c3af4.h"

void t243c3af4::read(const char* base, char* &ptr) {
  readData(&tHeader, base, ptr);
  readData(&ann, base, ptr);
  readData(&idSWorld, base, ptr);
  readData(&wpStart, base, ptr);
  readData(&wpEnd, base, ptr);
  readData(&unk_e1ac6f5, base, ptr);
  readData(&wpPosition, base, ptr);
  readData(&wpNormal, base, ptr);
  readData(&unk_1c414e5, base, ptr);
}
