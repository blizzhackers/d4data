/**
 * Definition: t157f62db
 * Hash: 157f62db
 */

#include "t157f62db.h"

void t157f62db::read(const char* base, char* &ptr) {
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
