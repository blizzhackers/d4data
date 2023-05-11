/**
 * Definition: PrefetchActorMessage
 * Hash: 9cc6c34f
 */

#include "PrefetchActorMessage.h"

void PrefetchActorMessage::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&tHeader, base, current);
  current = ptr + 0x10;
  readData(&ann, base, current);
  current = ptr + 0x18;
  readData(&snoActor, base, current);
  current = ptr + 0x1c;
  readData(&unk_39ae9c2, base, current);
  current = ptr + 0xa0;
  readData(&unk_ed94303, base, current);
  current = ptr + 0xac;
  readData(&tPlayerACDInfo, base, current);
  current = ptr + 0x420;
  readData(&tMountACDInfo, base, current);
  current = ptr + 0x430;
  readData(&tMonsterACDInfo, base, current);
  current = ptr + 0x46c;
  readData(&unk_223db49, base, current);
  ptr += 0x488;
}
