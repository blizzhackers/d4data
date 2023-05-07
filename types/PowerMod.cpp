/**
 * Definition: PowerMod
 * Hash: 520c452d
 */

#include "PowerMod.h"

void PowerMod::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&szName, base, current);
  current = ptr + 0x4;
  readData(&nMaxPoints, base, current);
  current = ptr + 0x8;
  readData(&dwModId, base, current);
  current = ptr + 0xc;
  readData(&dwModMask, base, current);
  current = ptr + 0x10;
  readData(&unk_94cc84e, base, current);
  current = ptr + 0x14;
  readData(&unk_939ad1e, base, current);
  current = ptr + 0x18;
  readData(&unk_7b47c37, base, current);
  current = ptr + 0x20;
  readData(&arSkillTags, base, current);
  ptr += 0x30;
}
