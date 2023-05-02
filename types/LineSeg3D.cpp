/**
 * Definition: LineSeg3D
 * Hash: 8128101e
 */

#include "LineSeg3D.h"

void LineSeg3D::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&wr, base, current);
  current = ptr + 0x18;
  readData(&wdLength, base, current);
  ptr += 0x1c;
}
