/**
 * Definition: SetIdleAnimationMessage
 * Hash: ae10292f
 */

#include "SetIdleAnimationMessage.h"

void SetIdleAnimationMessage::read(const char* base, char* &ptr) {
  readData(&tHeader, base, ptr);
  readData(&ann, base, ptr);
  readData(&unk_740ce2b, base, ptr);
  readData(&unk_fefc30f, base, ptr);
}
