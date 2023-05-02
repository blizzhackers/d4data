/**
 * Definition: t5e254c44
 * Hash: 5e254c44
 */

#include "t5e254c44.h"

void t5e254c44::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&tBone, base, current);
  current = ptr + 0x4;
  readData(&unk_e46daa0, base, current);
  current = ptr + 0x10;
  readData(&unk_947540c, base, current);
  ptr += 0x14;
}
