/**
 * Definition: GameTestingSkillSamplingStartMessage
 * Hash: e7cf1b85
 */

#include "GameTestingSkillSamplingStartMessage.h"

void GameTestingSkillSamplingStartMessage::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&tHeader, base, current);
  current = ptr + 0x10;
  readData(&unk_e99ade5, base, current);
  current = ptr + 0x50;
  readData(&snoPower, base, current);
  ptr += 0x54;
}
