/**
 * Definition: tee444ea1
 * Hash: ee444ea1
 */

#include "tee444ea1.h"

void tee444ea1::read(const char* base, char* &ptr) {
  readData(&tHeader, base, ptr);
  readData(&dwID, base, ptr);
  readData(&tSNOName, base, ptr);
}
