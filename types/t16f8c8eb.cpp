/**
 * Definition: t16f8c8eb
 * Hash: 16f8c8eb
 */

#include "t16f8c8eb.h"

void t16f8c8eb::read(const char* base, char* &ptr) {
  readData(&tHeader, base, ptr);
  readData(&ann, base, ptr);
  readData(&idSWorld, base, ptr);
  readData(&wpStart, base, ptr);
  readData(&vVelocity, base, ptr);
  readData(&unk_5aa0d1f, base, ptr);
  readData(&unk_be8c5f6, base, ptr);
  readData(&unk_4e7576b, base, ptr);
  readData(&unk_dab04b2, base, ptr);
  readData(&unk_efca38, base, ptr);
  readData(&unk_64595d0, base, ptr);
  readData(&unk_81f3430, base, ptr);
}
