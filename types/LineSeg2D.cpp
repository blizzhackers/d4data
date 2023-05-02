/**
 * Definition: LineSeg2D
 * Hash: 81280ffd
 */

#include "LineSeg2D.h"

void LineSeg2D::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&wr, base, current);
  current = ptr + 0x10;
  readData(&wdLength, base, current);
  ptr += 0x14;
}
