/**
 * Definition: ActorLookOverrideChangedMessage
 * Hash: cac8bfdd
 */

#include "ActorLookOverrideChangedMessage.h"

void ActorLookOverrideChangedMessage::read(const char* base, char* &ptr) {
  readData(&tHeader, base, ptr);
  readData(&ann, base, ptr);
  readData(&nChange, base, ptr);
  readData(&nLookOverrideHash, base, ptr);
  readData(&unk_80b4365, base, ptr);
  readData(&unk_1b57083, base, ptr);
}
