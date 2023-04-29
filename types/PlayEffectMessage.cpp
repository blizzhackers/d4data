/**
 * Definition: PlayEffectMessage
 * Hash: bfd1df88
 */

#include "PlayEffectMessage.h"

void PlayEffectMessage::read(const char* base, char* &ptr) {
  readData(&tHeader, base, ptr);
  readData(&ann, base, ptr);
  readData(&eEffectType, base, ptr);
  readData(&nEffectParameter, base, ptr);
  readData(&unk_4d7691e, base, ptr);
  readData(&annPlayer, base, ptr);
  readData(&annAttacker, base, ptr);
  readData(&flSpeedScale, base, ptr);
  readData(&dwEffectFlags, base, ptr);
  readData(&snoPowerSource, base, ptr);
  readData(&unk_cf6449d, base, ptr);
}
