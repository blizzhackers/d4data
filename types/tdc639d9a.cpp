/**
 * Definition: tdc639d9a
 * Hash: dc639d9a
 */

#include "tdc639d9a.h"

void tdc639d9a::read(const char* base, char* &ptr) {
  readData(&tHeader, base, ptr);
  readData(&unk_393b384, base, ptr);
  readData(&unk_74eafc7, base, ptr);
}
