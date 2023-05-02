/**
 * Definition: tb593e3c8
 * Hash: b593e3c8
 */

#include "tb593e3c8.h"

void tb593e3c8::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&snoAmbient, base, current);
  current = ptr + 0x4;
  readData(&unk_787cb71, base, current);
  current = ptr + 0x8;
  readData(&flSpacing, base, current);
  current = ptr + 0x10;
  readData(&arSurfaces, base, current);
  ptr += 0x20;
}
