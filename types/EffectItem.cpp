/**
 * Definition: EffectItem
 * Hash: f0aec15c
 */

#include "EffectItem.h"

void EffectItem::read(const char* base, char* &ptr) {
  readData(&dwWeight, base, ptr);
  readData(&snoSurfaces, base, ptr);
  readData(&unk_7903361, base, ptr);
  readData(&unk_d5fd413, base, ptr);
  readData(&unk_ae86ed6, base, ptr);
  readData(&arTopology, base, ptr);
  readData(&unk_43e7b5a, base, ptr);
  readData(&dwHash, base, ptr);
  readData(&tMsgTriggeredEvents, base, ptr);
}
