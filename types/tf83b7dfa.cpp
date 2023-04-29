/**
 * Definition: tf83b7dfa
 * Hash: f83b7dfa
 */

#include "tf83b7dfa.h"

void tf83b7dfa::read(const char* base, char* &ptr) {
  ptr += 8;
  readData(&dwType, base, ptr);
  readData(&dwPad, base, ptr);
  readData(&unk_cae89f5, base, ptr);
}
