/**
 * Definition: SimpleResponse
 * Hash: bdc45559
 */

#include "SimpleResponse.h"

void SimpleResponse::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&tHeader, base, current);
  ptr += 0x18;
}
