/**
 * Definition: PowerScriptParam
 * Hash: 99ccdad3
 */

#include "PowerScriptParam.h"

void PowerScriptParam::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&eType, base, current);
  ptr += 0x4;
}
