/**
 * Definition: t9901ddd4
 * Hash: 9901ddd4
 */

#include "t9901ddd4.h"

void t9901ddd4::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&tHeader, base, current);
  current = ptr + 0x10;
  readData(&eZone, base, current);
  current = ptr + 0x14;
  readData(&unk_953936b, base, current);
  ptr += 0x18;
}
