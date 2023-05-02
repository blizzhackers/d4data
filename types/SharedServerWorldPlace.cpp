/**
 * Definition: SharedServerWorldPlace
 * Hash: ec9295b
 */

#include "SharedServerWorldPlace.h"

void SharedServerWorldPlace::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&wp, base, current);
  current = ptr + 0xc;
  readData(&idSWorld, base, current);
  ptr += 0x14;
}
