/**
 * Definition: RitualTetherEffectMessage
 * Hash: f6b178f
 */

#include "RitualTetherEffectMessage.h"

void RitualTetherEffectMessage::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&tHeader, base, current);
  current = ptr + 0x10;
  readData(&annFrom, base, current);
  current = ptr + 0x18;
  readData(&tPlaceDest, base, current);
  ptr += 0x2c;
}
