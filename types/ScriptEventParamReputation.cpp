/**
 * Definition: ScriptEventParamReputation
 * Hash: 208cc2d3
 */

#include "ScriptEventParamReputation.h"

void ScriptEventParamReputation::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x8;
  readData(&dwType, base, current);
  current = ptr + 0x10;
  readData(&eParamType, base, current);
  current = ptr + 0x14;
  readData(&dwPad, base, current);
  current = ptr + 0x18;
  readData(&snoReputation, base, current);
  ptr += 0x20;
}
