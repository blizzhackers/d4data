/**
 * Definition: td7171cd8
 * Hash: d7171cd8
 */

#include "td7171cd8.h"

void td7171cd8::read(const char* base, char* &ptr) {
  ptr += 8;
  readData(&dwType, base, ptr);
  readData(&dwPad, base, ptr);
}
