/**
 * Definition: ScriptEventParamTimeInterval
 * Hash: d39b55fc
 */

#include "ScriptEventParamTimeInterval.h"

void ScriptEventParamTimeInterval::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x8;
  readData(&dwType, base, current);
  current = ptr + 0x10;
  readData(&eParamType, base, current);
  current = ptr + 0x14;
  readData(&dwPad, base, current);
  current = ptr + 0x18;
  readData(&eFilterInequality, base, current);
  current = ptr + 0x1c;
  readData(&unk_6ebd86, base, current);
  ptr += 0x20;
}
