/**
 * Definition: t165c63c0
 * Hash: 165c63c0
 */

#include "t165c63c0.h"

void t165c63c0::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&tHeader, base, current);
  current = ptr + 0x10;
  readData(&unk_870804d, base, current);
  current = ptr + 0x14;
  readData(&szName, base, current);
  ptr += 0x94;
}
