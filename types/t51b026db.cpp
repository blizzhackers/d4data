/**
 * Definition: t51b026db
 * Hash: 51b026db
 */

#include "t51b026db.h"

void t51b026db::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&tHeader, base, current);
  current = ptr + 0x10;
  readData(&unk_dce541c, base, current);
  current = ptr + 0x14;
  readData(&unk_a485b85, base, current);
  ptr += 0x1c;
}
