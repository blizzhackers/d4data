/**
 * Definition: t7535b2ad
 * Hash: 7535b2ad
 */

#include "t7535b2ad.h"

void t7535b2ad::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&eTier, base, current);
  current = ptr + 0x4;
  readData(&unk_395d1e7, base, current);
  ptr += 0x8;
}
