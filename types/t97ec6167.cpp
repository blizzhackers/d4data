/**
 * Definition: t97ec6167
 * Hash: 97ec6167
 */

#include "t97ec6167.h"

void t97ec6167::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&tHeader, base, current);
  current = ptr + 0x10;
  readData(&snoScroll, base, current);
  current = ptr + 0x14;
  readData(&unk_14e1214, base, current);
  ptr += 0x18;
}
