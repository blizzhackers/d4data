/**
 * Definition: BlizzconCVarsMessage
 * Hash: e3dcac2f
 */

#include "BlizzconCVarsMessage.h"

void BlizzconCVarsMessage::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&tHeader, base, current);
  current = ptr + 0x10;
  readData(&bMultiplayerEnabled, base, current);
  current = ptr + 0x14;
  readData(&bDHunterEnabled, base, current);
  current = ptr + 0x18;
  readData(&bBlizzconDropEnabled, base, current);
  ptr += 0x1c;
}
