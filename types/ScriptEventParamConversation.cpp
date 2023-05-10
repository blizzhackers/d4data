/**
 * Definition: ScriptEventParamConversation
 * Hash: 7c6c0883
 */

#include "ScriptEventParamConversation.h"

void ScriptEventParamConversation::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x8;
  readData(&dwType, base, current);
  current = ptr + 0x10;
  readData(&eParamType, base, current);
  current = ptr + 0x14;
  readData(&dwPad, base, current);
  current = ptr + 0x18;
  readData(&snoConversation, base, current);
  ptr += 0x20;
}
