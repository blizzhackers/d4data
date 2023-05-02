/**
 * Definition: td2461
 * Hash: d2461
 */

#include "td2461.h"

void td2461::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&tHeader, base, current);
  current = ptr + 0x10;
  readData(&unk_25d9f91, base, current);
  current = ptr + 0x214;
  readData(&unk_2498be, base, current);
  ptr += 0x318;
}
