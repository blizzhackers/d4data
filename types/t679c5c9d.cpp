/**
 * Definition: t679c5c9d
 * Hash: 679c5c9d
 */

#include "t679c5c9d.h"

void t679c5c9d::read(const char* base, char* &ptr) {
  readData(&eTeamIndex, base, ptr);
  readData(&eMonsterRarity, base, ptr);
  readData(&snoConversationList, base, ptr);
  readData(&fAIDisabled, base, ptr);
  readData(&unk_84adee7, base, ptr);
  readData(&unk_fd4cbca, base, ptr);
  readData(&unk_b5afb08, base, ptr);
  readData(&unk_2a0e071, base, ptr);
  readData(&unk_1c56441, base, ptr);
  readData(&unk_a497096, base, ptr);
  readData(&unk_7a5aecd, base, ptr);
  readData(&unk_e86679d, base, ptr);
  readData(&unk_8e70eff, base, ptr);
}
