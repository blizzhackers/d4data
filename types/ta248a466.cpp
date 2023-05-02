/**
 * Definition: ta248a466
 * Hash: a248a466
 */

#include "ta248a466.h"

void ta248a466::read(const char* base, char* &ptr) {
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
  readData(&snoParagonGlyphAffix, base, current);
  ptr += 0x20;
}
