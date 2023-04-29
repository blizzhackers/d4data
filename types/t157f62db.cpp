/**
 * Definition: t157f62db
 * Hash: 157f62db
 */

#include "t157f62db.h"

void t157f62db::read(const char* base, char* &ptr) {
  readData(&szLinkName, base, ptr);
  readData(&unk_700310d, base, ptr);
  readData(&unk_b45c1dd, base, ptr);
  readData(&dwFlags, base, ptr);
}
