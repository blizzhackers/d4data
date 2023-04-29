/**
 * Definition: AchievementProgressXboxOneMessage
 * Hash: 36fef466
 */

#include "AchievementProgressXboxOneMessage.h"

void AchievementProgressXboxOneMessage::read(const char* base, char* &ptr) {
  readData(&tHeader, base, ptr);
  readData(&unk_dce541c, base, ptr);
  readData(&nProfileAwardId, base, ptr);
  readData(&nProgress, base, ptr);
}
