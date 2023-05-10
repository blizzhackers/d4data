/**
 * Definition: ScriptEventParamMonsterFamily
 * Hash: 5e2b5512
 */

#include "ScriptEventParamMonsterFamily.h"

void ScriptEventParamMonsterFamily::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x8;
  readData(&dwType, base, current);
  current = ptr + 0x10;
  readData(&eParamType, base, current);
  current = ptr + 0x14;
  readData(&dwPad, base, current);
  current = ptr + 0x18;
  readData(&snoMonsterFamily, base, current);
  ptr += 0x20;
}
