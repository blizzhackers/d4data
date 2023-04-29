/**
 * Definition: PlayAnimationMessage
 * Hash: 26ca63fb
 */

#include "PlayAnimationMessage.h"

void PlayAnimationMessage::read(const char* base, char* &ptr) {
  readData(&tHeader, base, ptr);
  readData(&ann, base, ptr);
  readData(&eAnimReason, base, ptr);
  readData(&flUnitAnimStartTime, base, ptr);
  readData(&tAnim, base, ptr);
  readData(&unk_2875d89, base, ptr);
  readData(&unk_cbb1480, base, ptr);
  readData(&unk_5ffb133, base, ptr);
}
