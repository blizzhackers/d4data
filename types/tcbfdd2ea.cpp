/**
 * Definition: tcbfdd2ea
 * Hash: cbfdd2ea
 */

#include "tcbfdd2ea.h"

void tcbfdd2ea::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&tHeader, base, current);
  current = ptr + 0x28;
  readData(&ptArrayNodes, base, current);
  ptr += 0x38;
}
