/**
 * Definition: t2bbbc3f8
 * Hash: 2bbbc3f8
 */

#include "t2bbbc3f8.h"

void t2bbbc3f8::read(const char* base, char* &ptr) {
  readData(&tHeader, base, ptr);
  readData(&unk_a5fdfef, base, ptr);
  readData(&unk_e69585a, base, ptr);
}
