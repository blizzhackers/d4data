/**
 * Definition: SimpleRequest
 * Hash: 5331e973
 */

#include "SimpleRequest.h"

void SimpleRequest::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&tHeader, base, current);
  ptr += 0x14;
}
