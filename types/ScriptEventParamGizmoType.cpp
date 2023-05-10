/**
 * Definition: ScriptEventParamGizmoType
 * Hash: 1b859770
 */

#include "ScriptEventParamGizmoType.h"

void ScriptEventParamGizmoType::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x8;
  readData(&dwType, base, current);
  current = ptr + 0x10;
  readData(&eParamType, base, current);
  current = ptr + 0x14;
  readData(&dwPad, base, current);
  current = ptr + 0x18;
  readData(&eType, base, current);
  ptr += 0x20;
}
