/**
 * Definition: ScriptEventParamActor
 * Hash: 4cb0a881
 */

#include "ScriptEventParamActor.h"

void ScriptEventParamActor::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x8;
  readData(&dwType, base, current);
  current = ptr + 0x10;
  readData(&eParamType, base, current);
  current = ptr + 0x14;
  readData(&dwPad, base, current);
  current = ptr + 0x18;
  readData(&snoActor, base, current);
  ptr += 0x20;
}
