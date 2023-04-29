/**
 * Definition: tf1433225
 * Hash: f1433225
 */

#include "tf1433225.h"

void tf1433225::read(const char* base, char* &ptr) {
  ptr += 8;
  readData(&dwType, base, ptr);
  readData(&eParamType, base, ptr);
  readData(&dwPad, base, ptr);
  readData(&dwGroupHash, base, ptr);
  readData(&idValue, base, ptr);
  readData(&szGroup, base, ptr);
}
