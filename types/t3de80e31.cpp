/**
 * Definition: t3de80e31
 * Hash: 3de80e31
 */

#include "t3de80e31.h"

void t3de80e31::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&tHeader, base, current);
  current = ptr + 0x10;
  readData(&nType, base, current);
  current = ptr + 0x14;
  readData(&arParams, base, current);
  current = ptr + 0x1c;
  readData(&unk_2b2f2eb, base, current);
  current = ptr + 0x20;
  readData(&tData, base, current);
  ptr += 0x7554;
}
