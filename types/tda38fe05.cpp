/**
 * Definition: tda38fe05
 * Hash: da38fe05
 */

#include "tda38fe05.h"

void tda38fe05::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&localTransform, base, current);
  current = ptr + 0x20;
  readData(&stiffness, base, current);
  current = ptr + 0x24;
  readData(&friction, base, current);
  current = ptr + 0x28;
  readData(&boneIndex, base, current);
  current = ptr + 0x2a;
  readData(&padding, base, current);
  ptr += 0x30;
}
