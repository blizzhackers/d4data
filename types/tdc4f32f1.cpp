/**
 * Definition: tdc4f32f1
 * Hash: dc4f32f1
 */

#include "tdc4f32f1.h"

void tdc4f32f1::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&tHeader, base, current);
  current = ptr + 0x10;
  readData(&unk_3eecb71, base, current);
  current = ptr + 0x14;
  readData(&idSWorld, base, current);
  current = ptr + 0x1c;
  readData(&wpLocation, base, current);
  ptr += 0x28;
}
