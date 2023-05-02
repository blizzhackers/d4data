/**
 * Definition: SetIdleAnimationMessage
 * Hash: ae10292f
 */

#include "SetIdleAnimationMessage.h"

void SetIdleAnimationMessage::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&tHeader, base, current);
  current = ptr + 0x10;
  readData(&ann, base, current);
  current = ptr + 0x18;
  readData(&unk_740ce2b, base, current);
  current = ptr + 0x1c;
  readData(&unk_fefc30f, base, current);
  ptr += 0x24;
}
