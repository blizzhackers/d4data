/**
 * Definition: t4825b251
 * Hash: 4825b251
 */

#include "t4825b251.h"

void t4825b251::read(const char* base, char* &ptr) {
  readData(&tHeader, base, ptr);
  readData(&snoWorldState, base, ptr);
  readData(&nValue, base, ptr);
}
