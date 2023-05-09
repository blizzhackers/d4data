/**
 * Definition: MarkerEncounterData
 * Hash: c13618f
 */

#include "MarkerEncounterData.h"

void MarkerEncounterData::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x8;
  readData(&dwType, base, current);
  current = ptr + 0xc;
  readData(&dwPad, base, current);
  current = ptr + 0x10;
  readData(&arActorGroups, base, current);
  current = ptr + 0x20;
  readData(&unk_b5b0f9a, base, current);
  current = ptr + 0x30;
  readData(&snoScript, base, current);
  current = ptr + 0x40;
  readData(&unk_a497096, base, current);
  current = ptr + 0x44;
  readData(&unk_7a5aecd, base, current);
  current = ptr + 0x48;
  readData(&unk_8e70eff, base, current);
  current = ptr + 0x4c;
  readData(&unk_c627b16, base, current);
  current = ptr + 0x50;
  readData(&unk_ba8fd29, base, current);
  ptr += 0x58;
}
