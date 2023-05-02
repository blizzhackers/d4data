/**
 * Definition: t8f5adb75
 * Hash: 8f5adb75
 */

#include "t8f5adb75.h"

void t8f5adb75::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&szName, base, current);
  current = ptr + 0x10;
  readData(&unk_d0cf069, base, current);
  ptr += 0x18;
}
