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
  readData(&unk_e8602d3, base, current);
  current = ptr + 0x20;
  readData(&unk_7d5553e, base, current);
  current = ptr + 0x24;
  readData(&unk_19bdc57, base, current);
  current = ptr + 0x28;
  readData(&unk_7c79fc2, base, current);
  current = ptr + 0x2c;
  readData(&unk_43960c1, base, current);
  current = ptr + 0x30;
  readData(&unk_e5a6bb1, base, current);
  current = ptr + 0xc8;
  readData(&ptEffects, base, current);
  current = ptr + 0xd8;
  readData(&unk_50a2c90, base, current);
  current = ptr + 0xe8;
  readData(&nEffectWeightMethod, base, current);
  current = ptr + 0xec;
  readData(&snoPower, base, current);
  current = ptr + 0xf0;
  readData(&unk_760871b, base, current);
  current = ptr + 0xf4;
  readData(&snoConversation, base, current);
  current = ptr + 0xf8;
  readData(&unk_e7c25e0, base, current);
  current = ptr + 0xfc;
  readData(&unk_51077dd, base, current);
  current = ptr + 0x104;
  readData(&fPlayedBit, base, current);
  current = ptr + 0x148;
  readData(&ptHardpoints, base, current);
  current = ptr + 0x158;
  readData(&unk_4f7a18a, base, current);
  current = ptr + 0x15c;
  readData(&unk_adf7def, base, current);
  ptr += 0x160;
}
