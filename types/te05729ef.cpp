/**
 * Definition: te05729ef
 * Hash: e05729ef
 */

#include "te05729ef.h"

void te05729ef::read(const char* base, char* &ptr) {
  ptr += 8;
  readData(&dwType, base, ptr);
  readData(&dwPad, base, ptr);
}
