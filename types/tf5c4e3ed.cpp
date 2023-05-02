/**
 * Definition: tf5c4e3ed
 * Hash: f5c4e3ed
 */

#include "tf5c4e3ed.h"

void tf5c4e3ed::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&tAppearance, base, current);
  current = ptr + 0x8;
  readData(&tMaterial, base, current);
  ptr += 0x10;
}
