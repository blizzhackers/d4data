/**
 * Definition: RitualTetherEffectMessage
 * Hash: f6b178f
 */

#include "RitualTetherEffectMessage.h"

void RitualTetherEffectMessage::read(const char* base, char* &ptr) {
  readData(&tHeader, base, ptr);
  readData(&annFrom, base, ptr);
  readData(&tPlaceDest, base, ptr);
}
