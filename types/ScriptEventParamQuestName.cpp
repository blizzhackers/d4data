/**
 * Definition: ScriptEventParamQuestName
 * Hash: 7946bdbb
 */

#include "ScriptEventParamQuestName.h"

void ScriptEventParamQuestName::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x8;
  readData(&dwType, base, current);
  current = ptr + 0x10;
  readData(&eParamType, base, current);
  current = ptr + 0x14;
  readData(&dwPad, base, current);
  current = ptr + 0x18;
  readData(&dwQuestHash, base, current);
  current = ptr + 0x20;
  readData(&szQuest, base, current);
  ptr += 0x30;
}
