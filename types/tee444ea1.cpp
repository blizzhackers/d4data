/**
 * Definition: tee444ea1
 * Hash: ee444ea1
 */

#include "tee444ea1.h"

void tee444ea1::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&tHeader, base, current);
  current = ptr + 0x10;
  readData(&dwID, base, current);
  current = ptr + 0x14;
  readData(&tSNOName, base, current);
  ptr += 0x1c;
}
