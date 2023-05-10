/**
 * Definition: ScriptEventParamLevelArea
 * Hash: 6a196cf9
 */

#include "ScriptEventParamLevelArea.h"

void ScriptEventParamLevelArea::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x8;
  readData(&dwType, base, current);
  current = ptr + 0x10;
  readData(&eParamType, base, current);
  current = ptr + 0x14;
  readData(&dwPad, base, current);
  current = ptr + 0x18;
  readData(&snoLevelArea, base, current);
  ptr += 0x20;
}
