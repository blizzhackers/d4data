/**
 * Definition: tf1433225
 * Hash: f1433225
 */

#include "tf1433225.h"

void tf1433225::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x8;
  readData(&dwType, base, current);
  current = ptr + 0x10;
  readData(&eParamType, base, current);
  current = ptr + 0x14;
  readData(&dwPad, base, current);
  current = ptr + 0x18;
  readData(&dwGroupHash, base, current);
  current = ptr + 0x1c;
  readData(&idValue, base, current);
  current = ptr + 0x20;
  readData(&szGroup, base, current);
  ptr += 0x30;
}
