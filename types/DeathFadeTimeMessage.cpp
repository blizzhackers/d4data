/**
 * Definition: DeathFadeTimeMessage
 * Hash: 763dedaa
 */

#include "DeathFadeTimeMessage.h"

void DeathFadeTimeMessage::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&tHeader, base, current);
  current = ptr + 0x10;
  readData(&ann, base, current);
  current = ptr + 0x18;
  readData(&nTimeUntilFade, base, current);
  current = ptr + 0x1c;
  readData(&nFadeTime, base, current);
  current = ptr + 0x20;
  readData(&bRecurseForAttachments, base, current);
  ptr += 0x24;
}
