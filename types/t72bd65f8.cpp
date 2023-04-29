/**
 * Definition: t72bd65f8
 * Hash: 72bd65f8
 */

#include "t72bd65f8.h"

void t72bd65f8::read(const char* base, char* &ptr) {
  readData(&tHeader, base, ptr);
  readData(&uToken, base, ptr);
}
