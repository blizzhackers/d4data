/**
 * Definition: t243c3af4
 * Hash: 243c3af4
 */

#include "t243c3af4.h"

void t243c3af4::read(const char* base, char* &ptr) {
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
  readData(&wpEnd, base, current);
  current = ptr + 0x38;
  readData(&unk_e1ac6f5, base, current);
  current = ptr + 0x3c;
  readData(&wpPosition, base, current);
  current = ptr + 0x48;
  readData(&wpNormal, base, current);
  current = ptr + 0x54;
  readData(&unk_1c414e5, base, current);
  ptr += 0x58;
}
