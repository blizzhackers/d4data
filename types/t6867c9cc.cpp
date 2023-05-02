/**
 * Definition: t6867c9cc
 * Hash: 6867c9cc
 */

#include "t6867c9cc.h"

void t6867c9cc::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&tSNOName, base, current);
  current = ptr + 0x8;
  readData(&eActorType, base, current);
  current = ptr + 0xc;
  readData(&eGender, base, current);
  ptr += 0x10;
}
