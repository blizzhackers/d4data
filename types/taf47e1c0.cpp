/**
 * Definition: taf47e1c0
 * Hash: af47e1c0
 */

#include "taf47e1c0.h"

void taf47e1c0::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x8;
  readData(&dwType, base, current);
  current = ptr + 0x10;
  readData(&bInverse, base, current);
  current = ptr + 0x14;
  readData(&dwPad, base, current);
  current = ptr + 0x18;
  readData(&eSubject, base, current);
  current = ptr + 0x1c;
  readData(&snoPower, base, current);
  current = ptr + 0x20;
  readData(&unk_e0aad12, base, current);
  ptr += 0x28;
}
