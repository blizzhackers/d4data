/**
 * Definition: tb8237382
 * Hash: b8237382
 */

#include "tb8237382.h"

void tb8237382::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&unk_8536b47, base, current);
  ptr += 0x10;
}
