/**
 * Definition: tf271a7c0
 * Hash: f271a7c0
 */

#include "tf271a7c0.h"

void tf271a7c0::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&tHeader, base, current);
  current = ptr + 0x10;
  readData(&eUnitType, base, current);
  current = ptr + 0x14;
  readData(&unk_b0a3524, base, current);
  ptr += 0x18;
}
