/**
 * Definition: t98411c93
 * Hash: 98411c93
 */

#include "t98411c93.h"

void t98411c93::read(const char* base, char* &ptr) {
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
  readData(&unk_86c2785, base, current);
  ptr += 0x28;
}
