/**
 * Definition: t4494c609
 * Hash: 4494c609
 */

#include "t4494c609.h"

void t4494c609::read(const char* base, char* &ptr) {
  ptr += 8;
  readData(&dwType, base, ptr);
  readData(&bNegate, base, ptr);
  readData(&dwPad, base, ptr);
  readData(&snoWorld, base, ptr);
}
