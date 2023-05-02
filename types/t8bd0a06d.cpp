/**
 * Definition: t8bd0a06d
 * Hash: 8bd0a06d
 */

#include "t8bd0a06d.h"

void t8bd0a06d::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&tHeader, base, current);
  current = ptr + 0x10;
  readData(&unk_ad293f5, base, current);
  current = ptr + 0x14;
  readData(&unk_f05145d, base, current);
  current = ptr + 0x18;
  readData(&snoDestination, base, current);
  ptr += 0x1c;
}
