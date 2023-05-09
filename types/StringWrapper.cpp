/**
 * Definition: StringWrapper
 * Hash: 4bbb31b8
 */

#include "StringWrapper.h"

void StringWrapper::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&szValue, base, current);
  ptr += 0x10;
}
