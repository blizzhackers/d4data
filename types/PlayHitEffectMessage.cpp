/**
 * Definition: PlayHitEffectMessage
 * Hash: 1dfc9c2d
 */

#include "PlayHitEffectMessage.h"

void PlayHitEffectMessage::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&tHeader, base, current);
  current = ptr + 0x10;
  readData(&ann, base, current);
  current = ptr + 0x18;
  readData(&annAttacker, base, current);
  current = ptr + 0x20;
  readData(&eDamageType, base, current);
  ptr += 0x24;
}
