/**
 * Definition: CampaignChain
 * Hash: e792ade3
 */

#include "CampaignChain.h"

void CampaignChain::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&dwID, base, current);
  current = ptr + 0x4;
  readData(&snoQuestChain, base, current);
  ptr += 0x8;
}
