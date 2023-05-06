/**
 * Definition: ActorVOData
 * Hash: bb55e0d8
 */

#include "ActorVOData.h"

void ActorVOData::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&fVOPlaysOnPlayer, base, current);
  current = ptr + 0x4;
  readData(&snoSpeaker, base, current);
  current = ptr + 0x8;
  readData(&snoConversationList, base, current);
  current = ptr + 0xc;
  readData(&unk_94efee3, base, current);
  ptr += 0x14;
}
