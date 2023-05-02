/**
 * Definition: tdc639d9a
 * Hash: dc639d9a
 */

#include "tdc639d9a.h"

void tdc639d9a::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&tHeader, base, current);
  current = ptr + 0x10;
  readData(&unk_393b384, base, current);
  current = ptr + 0x14;
  readData(&unk_74eafc7, base, current);
  ptr += 0x18;
}
