/**
 * Definition: tec9d1911
 * Hash: ec9d1911
 */

#include "tec9d1911.h"

void tec9d1911::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x8;
  readData(&dwType, base, current);
  current = ptr + 0x10;
  readData(&unk_9b2bc26, base, current);
  current = ptr + 0x30;
  readData(&unk_77ed19a, base, current);
  current = ptr + 0x34;
  readData(&dwPad, base, current);
  ptr += 0x38;
}
