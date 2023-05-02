/**
 * Definition: PlayEffectMessage
 * Hash: bfd1df88
 */

#include "PlayEffectMessage.h"

void PlayEffectMessage::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&tHeader, base, current);
  current = ptr + 0x10;
  readData(&ann, base, current);
  current = ptr + 0x18;
  readData(&eEffectType, base, current);
  current = ptr + 0x1c;
  readData(&nEffectParameter, base, current);
  current = ptr + 0x24;
  readData(&unk_4d7691e, base, current);
  current = ptr + 0x34;
  readData(&annPlayer, base, current);
  current = ptr + 0x40;
  readData(&annAttacker, base, current);
  current = ptr + 0x4c;
  readData(&flSpeedScale, base, current);
  current = ptr + 0x54;
  readData(&dwEffectFlags, base, current);
  current = ptr + 0x5c;
  readData(&snoPowerSource, base, current);
  current = ptr + 0x64;
  readData(&unk_cf6449d, base, current);
  ptr += 0x70;
}
