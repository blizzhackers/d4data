/**
 * Definition: RequiredMessageHeader
 * Hash: c61966ef
 */

#include "RequiredMessageHeader.h"

void RequiredMessageHeader::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&eType, base, current);
  current = ptr + 0x4;
  readData(&unk_2f5806b, base, current);
  current = ptr + 0x8;
  readData(&dwSize, base, current);
  ptr += 0x10;
}
