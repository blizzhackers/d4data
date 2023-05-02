/**
 * Definition: Quaternion16
 * Hash: 466dd9ad
 */

#include "Quaternion16.h"

void Quaternion16::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&x, base, current);
  current = ptr + 0x2;
  readData(&y, base, current);
  current = ptr + 0x4;
  readData(&z, base, current);
  current = ptr + 0x6;
  readData(&w, base, current);
  ptr += 0x8;
}
