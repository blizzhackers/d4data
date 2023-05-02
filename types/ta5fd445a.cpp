/**
 * Definition: ta5fd445a
 * Hash: a5fd445a
 */

#include "ta5fd445a.h"

void ta5fd445a::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&tHeader, base, current);
  ptr += 0x10;
}
