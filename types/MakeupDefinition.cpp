/**
 * Definition: MakeupDefinition
 * Hash: 1b36952c
 */

#include "MakeupDefinition.h"

void MakeupDefinition::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x8;
  readData(&unk_9da2273, base, current);
  current = ptr + 0x1c;
  readData(&snoMakeup, base, current);
  current = ptr + 0x20;
  readData(&flIntensity, base, current);
  current = ptr + 0x24;
  readData(&unk_e0611b0, base, current);
  current = ptr + 0x28;
  readData(&unk_254bd5e, base, current);
  current = ptr + 0x2c;
  readData(&hIconImage, base, current);
  ptr += 0x30;
}
