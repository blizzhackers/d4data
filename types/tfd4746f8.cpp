/**
 * Definition: tfd4746f8
 * Hash: fd4746f8
 */

#include "tfd4746f8.h"

void tfd4746f8::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&unk_c534f19, base, current);
  current = ptr + 0x4;
  readData(&unk_c534e1b, base, current);
  ptr += 0x8;
}
