/**
 * Definition: ta77b14db
 * Hash: a77b14db
 */

#include "ta77b14db.h"

void ta77b14db::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&unk_db96ab2, base, current);
  current = ptr + 0x4;
  readData(&hClassTitle, base, current);
  current = ptr + 0x8;
  readData(&unk_a210c9f, base, current);
  current = ptr + 0xc;
  readData(&hResource, base, current);
  current = ptr + 0x10;
  readData(&unk_2af459a, base, current);
  ptr += 0x20;
}
