/**
 * Definition: CampaignData
 * Hash: 1688c3da
 */

#include "CampaignData.h"

void CampaignData::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&unk_22f765c, base, current);
  ptr += 0x10;
}
