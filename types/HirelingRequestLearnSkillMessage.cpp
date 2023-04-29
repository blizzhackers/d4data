/**
 * Definition: HirelingRequestLearnSkillMessage
 * Hash: b6091311
 */

#include "HirelingRequestLearnSkillMessage.h"

void HirelingRequestLearnSkillMessage::read(const char* base, char* &ptr) {
  readData(&tHeader, base, ptr);
  readData(&ann, base, ptr);
  readData(&snoSkill, base, ptr);
}
