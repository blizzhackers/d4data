/**
 * Definition: tad008e7e
 * Hash: ad008e7e
 */

#include "tad008e7e.h"

void tad008e7e::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&tHeader, base, current);
  current = ptr + 0x10;
  readData(&uToken, base, current);
  current = ptr + 0x14;
  readData(&eError, base, current);
  ptr += 0x18;
}
