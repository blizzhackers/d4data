/**
 * Definition: ActorLookOverrideChangedMessage
 * Hash: cac8bfdd
 */

#include "ActorLookOverrideChangedMessage.h"

void ActorLookOverrideChangedMessage::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&tHeader, base, current);
  current = ptr + 0x10;
  readData(&ann, base, current);
  current = ptr + 0x18;
  readData(&nChange, base, current);
  current = ptr + 0x1c;
  readData(&nLookOverrideHash, base, current);
  current = ptr + 0x20;
  readData(&unk_80b4365, base, current);
  current = ptr + 0x24;
  readData(&bRenderArmor, base, current);
  ptr += 0x28;
}
