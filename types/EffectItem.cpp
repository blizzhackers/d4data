/**
 * Definition: EffectItem
 * Hash: f0aec15c
 */

#include "EffectItem.h"

void EffectItem::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&dwWeight, base, current);
  current = ptr + 0x8;
  readData(&snoSurfaces, base, current);
  current = ptr + 0x18;
  readData(&unk_7903361, base, current);
  current = ptr + 0x28;
  readData(&unk_d5fd413, base, current);
  current = ptr + 0x38;
  readData(&unk_ae86ed6, base, current);
  current = ptr + 0x48;
  readData(&arTopology, base, current);
  current = ptr + 0x58;
  readData(&unk_43e7b5a, base, current);
  current = ptr + 0x68;
  readData(&dwHash, base, current);
  current = ptr + 0x70;
  readData(&tMsgTriggeredEvents, base, current);
  ptr += 0x98;
}
