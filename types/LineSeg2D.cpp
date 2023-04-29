/**
 * Definition: LineSeg2D
 * Hash: 81280ffd
 */

#include "LineSeg2D.h"

void LineSeg2D::read(const char* base, char* &ptr) {
  readData(&wr, base, ptr);
  readData(&wdLength, base, ptr);
}
