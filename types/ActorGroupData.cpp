/**
 * Definition: ActorGroupData
 * Hash: 888e9180
 */

#include "ActorGroupData.h"

void ActorGroupData::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&tHeader, base, current);
  ptr += 0x104;
}
