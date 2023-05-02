/**
 * Definition: PlayAnimationMessage
 * Hash: 26ca63fb
 */

#include "PlayAnimationMessage.h"

void PlayAnimationMessage::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&tHeader, base, current);
  current = ptr + 0x10;
  readData(&ann, base, current);
  current = ptr + 0x18;
  readData(&eAnimReason, base, current);
  current = ptr + 0x1c;
  readData(&flUnitAnimStartTime, base, current);
  current = ptr + 0x20;
  readData(&tAnim, base, current);
  current = ptr + 0xfc;
  readData(&unk_2875d89, base, current);
  current = ptr + 0x114;
  readData(&unk_cbb1480, base, current);
  current = ptr + 0x11c;
  readData(&unk_5ffb133, base, current);
  ptr += 0x124;
}
