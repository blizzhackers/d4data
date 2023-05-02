/**
 * Definition: ta13668ea
 * Hash: a13668ea
 */

#include "ta13668ea.h"

void ta13668ea::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&unk_fbd9a84, base, current);
  current = ptr + 0x4;
  readData(&unk_b0214a9, base, current);
  ptr += 0x8;
}
