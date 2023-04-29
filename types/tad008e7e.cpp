/**
 * Definition: tad008e7e
 * Hash: ad008e7e
 */

#include "tad008e7e.h"

void tad008e7e::read(const char* base, char* &ptr) {
  readData(&tHeader, base, ptr);
  readData(&uToken, base, ptr);
  readData(&eError, base, ptr);
}
