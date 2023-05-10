/**
 * Definition: QuestFollower
 * Hash: b150855c
 */

#include "QuestFollower.h"

void QuestFollower::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&snoActor, base, current);
  current = ptr + 0x4;
  readData(&unk_74ee52d, base, current);
  current = ptr + 0x20;
  readData(&arPhases, base, current);
  ptr += 0x30;
}
