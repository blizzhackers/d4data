/**
 * Definition: t6c31dba2
 * Hash: 6c31dba2
 */

#include "t6c31dba2.h"

void t6c31dba2::read(const char* base, char* &ptr) {
  ptr += 8;
  readData(&dwType, base, ptr);
  readData(&dwPad, base, ptr);
  readData(&unk_247a8fe, base, ptr);
  readData(&arConditions, base, ptr);
}
