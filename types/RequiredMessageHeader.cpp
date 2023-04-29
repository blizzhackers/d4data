/**
 * Definition: RequiredMessageHeader
 * Hash: c61966ef
 */

#include "RequiredMessageHeader.h"

void RequiredMessageHeader::read(const char* base, char* &ptr) {
  readData(&eType, base, ptr);
  readData(&unk_2f5806b, base, ptr);
  readData(&dwSize, base, ptr);
}
