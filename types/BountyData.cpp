/**
 * Definition: BountyData
 * Hash: b195c35b
 */

#include "BountyData.h"

void BountyData::read(const char* base, char* &ptr) {
  readData(&snoQuest, base, ptr);
  readData(&snoWorldState, base, ptr);
  readData(&nValue, base, ptr);
  readData(&eBountyType, base, ptr);
  readData(&unk_6199257, base, ptr);
}
