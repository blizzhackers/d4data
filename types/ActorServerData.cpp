/**
 * Definition: ActorServerData
 * Hash: dbd500aa
 */

#include "ActorServerData.h"

void ActorServerData::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&snoScript, base, current);
  current = ptr + 0x4;
  readData(&fCannotBeTargetedByAI, base, current);
  current = ptr + 0x8;
  readData(&unk_195410b, base, current);
  current = ptr + 0xc;
  readData(&unk_e1b2967, base, current);
  current = ptr + 0x10;
  readData(&fInvulnerable, base, current);
  current = ptr + 0x14;
  readData(&unk_d27bf99, base, current);
  current = ptr + 0x18;
  readData(&fCannotDie, base, current);
  current = ptr + 0x1c;
  readData(&unk_9ad1b04, base, current);
  current = ptr + 0x20;
  readData(&flNoSpawnRadius, base, current);
  ptr += 0x24;
}
