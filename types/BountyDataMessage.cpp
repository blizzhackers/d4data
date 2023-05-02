/**
 * Definition: BountyDataMessage
 * Hash: b3c21860
 */

#include "BountyDataMessage.h"

void BountyDataMessage::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&tHeader, base, current);
  current = ptr + 0x10;
  readData(&snoBounty, base, current);
  current = ptr + 0x14;
  readData(&snoRewardItem, base, current);
  current = ptr + 0x18;
  readData(&dwEndTime, base, current);
  ptr += 0x20;
}
