/**
 * Definition: t22fa43bd
 * Hash: 22fa43bd
 */

#include "t22fa43bd.h"

void t22fa43bd::read(const char* base, char* &ptr) {
  ptr += 8;
  readData(&dwType, base, ptr);
  readData(&dwPad, base, ptr);
  readData(&unk_d192efe, base, ptr);
}
