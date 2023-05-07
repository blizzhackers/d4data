/**
 * Definition: t16f8c8eb
 * Hash: 16f8c8eb
 */

#include "t16f8c8eb.h"

void t16f8c8eb::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&tHeader, base, current);
  current = ptr + 0x10;
  readData(&ann, base, current);
  current = ptr + 0x18;
  readData(&idSWorld, base, current);
  current = ptr + 0x20;
  readData(&wpStart, base, current);
  current = ptr + 0x2c;
  readData(&vVelocity, base, current);
  current = ptr + 0x38;
  readData(&unk_5aa0d1f, base, current);
  current = ptr + 0x44;
  readData(&unk_be8c5f6, base, current);
  current = ptr + 0x48;
  readData(&flProjectileRadius, base, current);
  current = ptr + 0x4c;
  readData(&unk_dab04b2, base, current);
  current = ptr + 0x50;
  readData(&unk_efca38, base, current);
  current = ptr + 0x8c;
  readData(&unk_64595d0, base, current);
  current = ptr + 0x150;
  readData(&unk_81f3430, base, current);
  ptr += 0x154;
}
