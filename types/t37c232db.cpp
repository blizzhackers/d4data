/**
 * Definition: t37c232db
 * Hash: 37c232db
 */

#include "t37c232db.h"

void t37c232db::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&snoListener, base, current);
  current = ptr + 0x4;
  readData(&unk_bcac396, base, current);
  ptr += 0xc;
}
