/**
 * Definition: tb493176d
 * Hash: b493176d
 */

#include "tb493176d.h"

void tb493176d::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&hImageHandle, base, current);
  ptr += 0x4;
}
