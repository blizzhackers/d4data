/**
 * Definition: tb3d7f019
 * Hash: b3d7f019
 */

#include "tb3d7f019.h"

void tb3d7f019::read(const char* base, char* &ptr) {
  readData(&tHeader, base, ptr);
  readData(&wpLocation, base, ptr);
}
