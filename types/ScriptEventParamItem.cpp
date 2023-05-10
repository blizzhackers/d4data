/**
 * Definition: ScriptEventParamItem
 * Hash: 48290b97
 */

#include "ScriptEventParamItem.h"

void ScriptEventParamItem::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x8;
  readData(&dwType, base, current);
  current = ptr + 0x10;
  readData(&eParamType, base, current);
  current = ptr + 0x14;
  readData(&dwPad, base, current);
  current = ptr + 0x18;
  readData(&snoItem, base, current);
  ptr += 0x20;
}
