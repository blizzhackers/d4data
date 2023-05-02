/**
 * Definition: AchievementProgressXboxOneMessage
 * Hash: 36fef466
 */

#include "AchievementProgressXboxOneMessage.h"

void AchievementProgressXboxOneMessage::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&tHeader, base, current);
  current = ptr + 0x10;
  readData(&unk_dce541c, base, current);
  current = ptr + 0x14;
  readData(&nProfileAwardId, base, current);
  current = ptr + 0x18;
  readData(&nProgress, base, current);
  ptr += 0x1c;
}
