/**
 * Definition: ScriptEventParamMonsterRarity
 * Hash: 7a2bfb8b
 */

#include "ScriptEventParamMonsterRarity.h"

void ScriptEventParamMonsterRarity::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x8;
  readData(&dwType, base, current);
  current = ptr + 0x10;
  readData(&eParamType, base, current);
  current = ptr + 0x14;
  readData(&dwPad, base, current);
  current = ptr + 0x18;
  readData(&eMonsterRarity, base, current);
  ptr += 0x20;
}
