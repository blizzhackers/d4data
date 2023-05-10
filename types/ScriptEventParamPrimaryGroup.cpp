/**
 * Definition: ScriptEventParamPrimaryGroup
 * Hash: b7693c39
 */

#include "ScriptEventParamPrimaryGroup.h"

void ScriptEventParamPrimaryGroup::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x8;
  readData(&dwType, base, current);
  current = ptr + 0x10;
  readData(&eParamType, base, current);
  current = ptr + 0x14;
  readData(&dwPad, base, current);
  current = ptr + 0x18;
  readData(&tPrimaryGroup, base, current);
  ptr += 0x60;
}
