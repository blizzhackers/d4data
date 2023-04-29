/**
 * Definition: EffectGroupDefinition
 * Hash: 7aa4c203
 */

#include "EffectGroupDefinition.h"

void EffectGroupDefinition::read(const char* base, char* &ptr) {
  ptr += 8;
  readData(&flDuration, base, ptr);
  readData(&dwEffectFlags, base, ptr);
  readData(&unk_4327903, base, ptr);
  readData(&unk_9cf7635, base, ptr);
  readData(&unk_30364bd, base, ptr);
  readData(&unk_43960c1, base, ptr);
  readData(&unk_e5a6bb1, base, ptr);
  readData(&ptEffects, base, ptr);
  readData(&unk_50a2c90, base, ptr);
  readData(&nEffectWeightMethod, base, ptr);
  readData(&snoPower, base, ptr);
  readData(&unk_760871b, base, ptr);
  readData(&snoConversation, base, ptr);
  readData(&unk_e7c25e0, base, ptr);
  readData(&unk_51077dd, base, ptr);
  readData(&fPlayedBit, base, ptr);
  readData(&ptHardpoints, base, ptr);
  readData(&unk_4f7a18a, base, ptr);
  readData(&unk_adf7def, base, ptr);
}
