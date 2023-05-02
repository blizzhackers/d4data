/**
 * Definition: tdc22110c
 * Hash: dc22110c
 */

#include "tdc22110c.h"

void tdc22110c::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&unk_e61eac4, base, current);
  ptr += 0x10;
}
