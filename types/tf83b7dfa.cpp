/**
 * Definition: tf83b7dfa
 * Hash: f83b7dfa
 */

#include "tf83b7dfa.h"

void tf83b7dfa::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x8;
  readData(&dwType, base, current);
  current = ptr + 0xc;
  readData(&dwPad, base, current);
  current = ptr + 0x10;
  readData(&unk_cae89f5, base, current);
  ptr += 0x20;
}
