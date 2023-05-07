/**
 * Definition: ActorFacingData
 * Hash: 2900af1b
 */

#include "ActorFacingData.h"

void ActorFacingData::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&flTurnSpeed, base, current);
  current = ptr + 0x4;
  readData(&unk_69b0e21, base, current);
  current = ptr + 0x8;
  readData(&unk_3d9b929, base, current);
  ptr += 0xc;
}
