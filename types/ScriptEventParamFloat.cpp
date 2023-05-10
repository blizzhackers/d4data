/**
 * Definition: ScriptEventParamFloat
 * Hash: 4d0ffb5e
 */

#include "ScriptEventParamFloat.h"

void ScriptEventParamFloat::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x8;
  readData(&dwType, base, current);
  current = ptr + 0x10;
  readData(&eParamType, base, current);
  current = ptr + 0x14;
  readData(&dwPad, base, current);
  current = ptr + 0x18;
  readData(&flValue, base, current);
  ptr += 0x20;
}
