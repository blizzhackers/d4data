/**
 * Definition: ScriptEventParamEffectGroup
 * Hash: 2c0b5f22
 */

#include "ScriptEventParamEffectGroup.h"

void ScriptEventParamEffectGroup::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x8;
  readData(&dwType, base, current);
  current = ptr + 0x10;
  readData(&eParamType, base, current);
  current = ptr + 0x14;
  readData(&dwPad, base, current);
  current = ptr + 0x18;
  readData(&snoEffectGroup, base, current);
  ptr += 0x20;
}
