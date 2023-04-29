/**
 * Definition: BountyDataMessage
 * Hash: b3c21860
 */

#include "BountyDataMessage.h"

void BountyDataMessage::read(const char* base, char* &ptr) {
  readData(&tHeader, base, ptr);
  readData(&snoBounty, base, ptr);
  readData(&snoRewardItem, base, ptr);
  readData(&dwEndTime, base, ptr);
}
