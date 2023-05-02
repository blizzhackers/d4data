/**
 * Definition: HirelingRequestLearnSkillMessage
 * Hash: b6091311
 */

#include "HirelingRequestLearnSkillMessage.h"

void HirelingRequestLearnSkillMessage::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&tHeader, base, current);
  current = ptr + 0x10;
  readData(&ann, base, current);
  current = ptr + 0x18;
  readData(&snoSkill, base, current);
  ptr += 0x1c;
}
