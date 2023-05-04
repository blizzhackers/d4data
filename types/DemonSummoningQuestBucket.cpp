/**
 * Definition: DemonSummoningQuestBucket
 * Hash: 41e42840
 */

#include "DemonSummoningQuestBucket.h"

void DemonSummoningQuestBucket::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&tHeader, base, current);
  current = ptr + 0x108;
  readData(&arQuests, base, current);
  ptr += 0x118;
}
