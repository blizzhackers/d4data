/**
 * Definition: t171c4e7d
 * Hash: 171c4e7d
 */

#include "t171c4e7d.h"

void t171c4e7d::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&tHeader, base, current);
  ptr += 0x10;
}
