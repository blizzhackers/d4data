/**
 * Definition: t2d9968c0
 * Hash: 2d9968c0
 */

#include "t2d9968c0.h"

void t2d9968c0::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&snoAffix, base, current);
  current = ptr + 0x4;
  readData(&unk_828ec72, base, current);
  ptr += 0x8;
}
