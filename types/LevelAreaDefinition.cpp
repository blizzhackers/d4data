/**
 * Definition: LevelAreaDefinition
 * Hash: d3e96a9a
 */

#include "LevelAreaDefinition.h"

void LevelAreaDefinition::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x8;
  readData(&dwFlags, base, current);
  current = ptr + 0xc;
  readData(&snoWeather, base, current);
  current = ptr + 0x10;
  readData(&snoAudioContext, base, current);
  current = ptr + 0x14;
  readData(&unk_4709778, base, current);
  current = ptr + 0x18;
  readData(&unk_926359f, base, current);
  current = ptr + 0x1c;
  readData(&unk_27d289f, base, current);
  current = ptr + 0x20;
  readData(&unk_3d7c8a2, base, current);
  current = ptr + 0x24;
  readData(&snoFogOfWar, base, current);
  current = ptr + 0x28;
  readData(&unk_61c02e8, base, current);
  current = ptr + 0x38;
  readData(&unk_4e56acb, base, current);
  current = ptr + 0x78;
  readData(&tServices, base, current);
  ptr += 0xd0;
}
