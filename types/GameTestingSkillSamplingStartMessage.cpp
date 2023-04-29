/**
 * Definition: GameTestingSkillSamplingStartMessage
 * Hash: e7cf1b85
 */

#include "GameTestingSkillSamplingStartMessage.h"

void GameTestingSkillSamplingStartMessage::read(const char* base, char* &ptr) {
  readData(&tHeader, base, ptr);
  readData(&unk_e99ade5, base, ptr);
  readData(&snoPower, base, ptr);
}
