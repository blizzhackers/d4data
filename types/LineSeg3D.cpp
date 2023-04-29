/**
 * Definition: LineSeg3D
 * Hash: 8128101e
 */

#include "LineSeg3D.h"

void LineSeg3D::read(const char* base, char* &ptr) {
  readData(&wr, base, ptr);
  readData(&wdLength, base, ptr);
}
