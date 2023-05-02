/**
 * Definition: PostFXParams
 * Hash: 8a1f6d28
 */

#include "PostFXParams.h"

void PostFXParams::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&flFilterOffset, base, current);
  current = ptr + 0x10;
  readData(&flFilterCoeff, base, current);
  ptr += 0x20;
}
