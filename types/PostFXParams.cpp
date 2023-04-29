/**
 * Definition: PostFXParams
 * Hash: 8a1f6d28
 */

#include "PostFXParams.h"

void PostFXParams::read(const char* base, char* &ptr) {
  readData(&flFilterOffset, base, ptr);
  readData(&flFilterCoeff, base, ptr);
}
