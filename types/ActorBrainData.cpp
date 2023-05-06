/**
 * Definition: ActorBrainData
 * Hash: f04ef15f
 */

#include "ActorBrainData.h"

void ActorBrainData::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&unk_53c8916, base, current);
  current = ptr + 0x4;
  readData(&eBehaviorType, base, current);
  current = ptr + 0x8;
  readData(&unk_11ccff6, base, current);
  current = ptr + 0xc;
  readData(&unk_95830e2, base, current);
  current = ptr + 0x14;
  readData(&unk_52d5e42, base, current);
  current = ptr + 0x18;
  readData(&unk_595c677, base, current);
  current = ptr + 0x28;
  readData(&unk_ecc4ce7, base, current);
  ptr += 0x30;
}
