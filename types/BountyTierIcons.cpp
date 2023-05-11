/**
 * Definition: BountyTierIcons
 * Hash: fd221bd1
 */

#include "BountyTierIcons.h"

void BountyTierIcons::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&unk_44213a, base, current);
  current = ptr + 0x4;
  readData(&hIconNormal, base, current);
  current = ptr + 0x8;
  readData(&hIconDisabled, base, current);
  current = ptr + 0xc;
  readData(&unk_9ceb052, base, current);
  ptr += 0x10;
}
