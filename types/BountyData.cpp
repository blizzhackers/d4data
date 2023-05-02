/**
 * Definition: BountyData
 * Hash: b195c35b
 */

#include "BountyData.h"

void BountyData::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&snoQuest, base, current);
  current = ptr + 0x4;
  readData(&snoWorldState, base, current);
  current = ptr + 0x8;
  readData(&nValue, base, current);
  current = ptr + 0xc;
  readData(&eBountyType, base, current);
  current = ptr + 0x10;
  readData(&unk_6199257, base, current);
  ptr += 0x14;
}
