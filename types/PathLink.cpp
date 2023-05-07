/**
 * Definition: PathLink
 * Hash: 157f62db
 */

#include "PathLink.h"

void PathLink::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&szLinkName, base, current);
  current = ptr + 0x4;
  readData(&unk_700310d, base, current);
  current = ptr + 0xc;
  readData(&unk_b45c1dd, base, current);
  current = ptr + 0x10;
  readData(&dwFlags, base, current);
  ptr += 0x14;
}
