/**
 * Definition: PlayHitEffectMessage
 * Hash: 1dfc9c2d
 */

#include "PlayHitEffectMessage.h"

void PlayHitEffectMessage::read(const char* base, char* &ptr) {
  readData(&tHeader, base, ptr);
  readData(&ann, base, ptr);
  readData(&annAttacker, base, ptr);
  readData(&eDamageType, base, ptr);
}
