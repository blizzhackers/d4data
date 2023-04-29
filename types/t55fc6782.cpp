/**
 * Definition: t55fc6782
 * Hash: 55fc6782
 */

#include "t55fc6782.h"

void t55fc6782::read(const char* base, char* &ptr) {
  ptr += 8;
  readData(&dwType, base, ptr);
  readData(&dwPad, base, ptr);
  readData(&tEntries, base, ptr);
}
