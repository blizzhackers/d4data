/**
 * Definition: t90de2b1e
 * Hash: 90de2b1e
 */

#include "t90de2b1e.h"

void t90de2b1e::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&bUnlocked, base, current);
  current = ptr + 0x4;
  readData(&arTransmogSlots, base, current);
  ptr += 0xf8;
}
