/**
 * Definition: tb593e3c8
 * Hash: b593e3c8
 */

#include "tb593e3c8.h"

void tb593e3c8::read(const char* base, char* &ptr) {
  readData(&snoAmbient, base, ptr);
  readData(&unk_787cb71, base, ptr);
  readData(&flSpacing, base, ptr);
  readData(&arSurfaces, base, ptr);
}
