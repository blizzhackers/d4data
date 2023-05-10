/**
 * Definition: ScriptEventParamSubzone
 * Hash: cdd23e8e
 */

#include "ScriptEventParamSubzone.h"

void ScriptEventParamSubzone::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x8;
  readData(&dwType, base, current);
  current = ptr + 0x10;
  readData(&eParamType, base, current);
  current = ptr + 0x14;
  readData(&dwPad, base, current);
  current = ptr + 0x18;
  readData(&snoSubzone, base, current);
  ptr += 0x20;
}
