/**
 * Definition: t38ae08f0
 * Hash: 38ae08f0
 */

#include "t38ae08f0.h"

void t38ae08f0::read(const char* base, char* &ptr) {
  ptr += 8;
  readData(&dwType, base, ptr);
  readData(&bNegate, base, ptr);
  readData(&dwPad, base, ptr);
  readData(&ptCondition, base, ptr);
}
