/**
 * Definition: tbe07b3da
 * Hash: be07b3da
 */

#include "tbe07b3da.h"

void tbe07b3da::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x8;
  readData(&dwType, base, current);
  current = ptr + 0x10;
  readData(&bNegate, base, current);
  current = ptr + 0x14;
  readData(&dwPad, base, current);
  current = ptr + 0x18;
  readData(&unk_9d67ea6, base, current);
  ptr += 0x20;
}
