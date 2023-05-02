/**
 * Definition: t679c5c9d
 * Hash: 679c5c9d
 */

#include "t679c5c9d.h"

void t679c5c9d::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&eTeamIndex, base, current);
  current = ptr + 0x4;
  readData(&eMonsterRarity, base, current);
  current = ptr + 0x8;
  readData(&snoConversationList, base, current);
  current = ptr + 0xc;
  readData(&fAIDisabled, base, current);
  current = ptr + 0x10;
  readData(&unk_84adee7, base, current);
  current = ptr + 0x14;
  readData(&unk_fd4cbca, base, current);
  current = ptr + 0x18;
  readData(&unk_b5afb08, base, current);
  current = ptr + 0x1c;
  readData(&unk_2a0e071, base, current);
  current = ptr + 0x20;
  readData(&unk_1c56441, base, current);
  current = ptr + 0x24;
  readData(&unk_a497096, base, current);
  current = ptr + 0x28;
  readData(&unk_7a5aecd, base, current);
  current = ptr + 0x2c;
  readData(&unk_e86679d, base, current);
  current = ptr + 0x30;
  readData(&unk_8e70eff, base, current);
  ptr += 0x34;
}
