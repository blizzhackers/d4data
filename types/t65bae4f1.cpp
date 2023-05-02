/**
 * Definition: t65bae4f1
 * Hash: 65bae4f1
 */

#include "t65bae4f1.h"

void t65bae4f1::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&snoItem, base, current);
  current = ptr + 0x4;
  readData(&nCount, base, current);
  ptr += 0x8;
}
