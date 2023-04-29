/**
 * Definition: DeathFadeTimeMessage
 * Hash: 763dedaa
 */

#include "DeathFadeTimeMessage.h"

void DeathFadeTimeMessage::read(const char* base, char* &ptr) {
  readData(&tHeader, base, ptr);
  readData(&ann, base, ptr);
  readData(&nTimeUntilFade, base, ptr);
  readData(&nFadeTime, base, ptr);
  readData(&bRecurseForAttachments, base, ptr);
}
