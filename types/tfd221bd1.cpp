/**
 * Definition: tfd221bd1
 * Hash: fd221bd1
 */

#include "tfd221bd1.h"

void tfd221bd1::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&unk_44213a, base, current);
  current = ptr + 0x4;
  readData(&hIconNormal, base, current);
  current = ptr + 0x8;
  readData(&unk_c5ca709, base, current);
  ptr += 0xc;
}
