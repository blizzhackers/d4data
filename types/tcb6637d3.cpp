/**
 * Definition: tcb6637d3
 * Hash: cb6637d3
 */

#include "tcb6637d3.h"

void tcb6637d3::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&tHeader, base, current);
  current = ptr + 0x10;
  readData(&szNPCName, base, current);
  ptr += 0x50;
}
