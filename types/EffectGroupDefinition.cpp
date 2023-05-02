/**
 * Definition: EffectGroupDefinition
 * Hash: 7aa4c203
 */

#include "EffectGroupDefinition.h"

void EffectGroupDefinition::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x8;
  readData(&flDuration, base, current);
  current = ptr + 0xc;
  readData(&dwEffectFlags, base, current);
  current = ptr + 0x10;
  readData(&unk_4327903, base, current);
  current = ptr + 0x14;
  readData(&unk_9cf7635, base, current);
  current = ptr + 0x18;
  readData(&unk_30364bd, base, current);
  current = ptr + 0x1c;
  readData(&unk_43960c1, base, current);
  current = ptr + 0x20;
  readData(&unk_e5a6bb1, base, current);
  current = ptr + 0xb8;
  readData(&ptEffects, base, current);
  current = ptr + 0xc8;
  readData(&unk_50a2c90, base, current);
  current = ptr + 0xd8;
  readData(&nEffectWeightMethod, base, current);
  current = ptr + 0xdc;
  readData(&snoPower, base, current);
  current = ptr + 0xe0;
  readData(&unk_760871b, base, current);
  current = ptr + 0xe4;
  readData(&snoConversation, base, current);
  current = ptr + 0xe8;
  readData(&unk_e7c25e0, base, current);
  current = ptr + 0xec;
  readData(&unk_51077dd, base, current);
  current = ptr + 0xf4;
  readData(&fPlayedBit, base, current);
  current = ptr + 0x138;
  readData(&ptHardpoints, base, current);
  current = ptr + 0x148;
  readData(&unk_4f7a18a, base, current);
  current = ptr + 0x14c;
  readData(&unk_adf7def, base, current);
  ptr += 0x150;
}
