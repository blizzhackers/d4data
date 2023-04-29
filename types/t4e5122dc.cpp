/**
 * Definition: t4e5122dc
 * Hash: 4e5122dc
 */

#include "t4e5122dc.h"

void t4e5122dc::read(const char* base, char* &ptr) {
  readData(&nTextureIndex, base, ptr);
  readData(&nXOffset, base, ptr);
  readData(&nWidth, base, ptr);
}
