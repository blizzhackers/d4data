/**
 * Definition: tf4703db9
 * Hash: f4703db9
 */

#include "tf4703db9.h"

void tf4703db9::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&tMarker, base, current);
  ptr += 0xb8;
}
