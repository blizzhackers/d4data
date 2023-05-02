/**
 * Definition: t525de28e
 * Hash: 525de28e
 */

#include "t525de28e.h"

void t525de28e::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&unk_1c4f058, base, current);
  current = ptr + 0x8;
  readData(&unk_edbef87, base, current);
  ptr += 0x28;
}
