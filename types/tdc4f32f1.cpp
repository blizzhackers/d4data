/**
 * Definition: tdc4f32f1
 * Hash: dc4f32f1
 */

#include "tdc4f32f1.h"

void tdc4f32f1::read(const char* base, char* &ptr) {
  readData(&tHeader, base, ptr);
  readData(&unk_3eecb71, base, ptr);
  readData(&idSWorld, base, ptr);
  readData(&wpLocation, base, ptr);
}
