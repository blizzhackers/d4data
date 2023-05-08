/**
 * Definition: ScriptEventParamBase
 * Hash: 4824e5e3
 */

#include "ScriptEventParamBase.h"

void ScriptEventParamBase::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x8;
  readData(&dwType, base, current);
  current = ptr + 0x10;
  readData(&eParamType, base, current);
  current = ptr + 0x14;
  readData(&dwPad, base, current);
  ptr += 0x18;
}
