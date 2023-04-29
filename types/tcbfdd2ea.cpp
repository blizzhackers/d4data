/**
 * Definition: tcbfdd2ea
 * Hash: cbfdd2ea
 */

#include "tcbfdd2ea.h"

void tcbfdd2ea::read(const char* base, char* &ptr) {
  readData(&tHeader, base, ptr);
  readData(&ptArrayNodes, base, ptr);
}
