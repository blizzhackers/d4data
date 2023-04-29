/**
 * Definition: tceed69aa
 * Hash: ceed69aa
 */

#include "tceed69aa.h"

void tceed69aa::read(const char* base, char* &ptr) {
  ptr += 8;
  readData(&dwType, base, ptr);
  readData(&dwPad, base, ptr);
  readData(&tEntries, base, ptr);
}
