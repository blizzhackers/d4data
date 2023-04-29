/**
 * Definition: BlizzconCVarsMessage
 * Hash: e3dcac2f
 */

#include "BlizzconCVarsMessage.h"

void BlizzconCVarsMessage::read(const char* base, char* &ptr) {
  readData(&tHeader, base, ptr);
  readData(&bMultiplayerEnabled, base, ptr);
  readData(&bDHunterEnabled, base, ptr);
  readData(&bBlizzconDropEnabled, base, ptr);
}
