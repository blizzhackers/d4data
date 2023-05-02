/**
 * Definition: tfa8eb4a0
 * Hash: fa8eb4a0
 */

#include "tfa8eb4a0.h"

void tfa8eb4a0::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&flTime, base, current);
  current = ptr + 0x4;
  readData(&unk_c1fab61, base, current);
  ptr += 0x8;
}
