/**
 * Definition: t4f086626
 * Hash: 4f086626
 */

#include "t4f086626.h"

void t4f086626::read(const char* base, char* &ptr) {
  readData(&snoWorldState, base, ptr);
  readData(&nValue, base, ptr);
}
