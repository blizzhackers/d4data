/**
 * Definition: t51b026db
 * Hash: 51b026db
 */

#include "t51b026db.h"

void t51b026db::read(const char* base, char* &ptr) {
  readData(&tHeader, base, ptr);
  readData(&unk_dce541c, base, ptr);
  readData(&unk_a485b85, base, ptr);
}
