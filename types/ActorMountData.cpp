/**
 * Definition: ActorMountData
 * Hash: 3c856b06
 */

#include "ActorMountData.h"

void ActorMountData::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&unk_66a8c73, base, current);
  ptr += 0x4;
}
