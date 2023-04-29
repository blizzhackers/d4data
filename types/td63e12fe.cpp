/**
 * Definition: td63e12fe
 * Hash: d63e12fe
 */

#include "td63e12fe.h"

void td63e12fe::read(const char* base, char* &ptr) {
  ptr += 8;
  readData(&dwType, base, ptr);
  readData(&dwPad, base, ptr);
  readData(&unk_19b0f4a, base, ptr);
}
