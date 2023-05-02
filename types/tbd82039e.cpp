/**
 * Definition: tbd82039e
 * Hash: bd82039e
 */

#include "tbd82039e.h"

void tbd82039e::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&tKey, base, current);
  current = ptr + 0x4;
  readData(&unk_e1da18d, base, current);
  current = ptr + 0x8;
  readData(&unk_67545b, base, current);
  ptr += 0x20;
}
