/**
 * Definition: ScriptFormulaInfo
 * Hash: 20e37537
 */

#include "ScriptFormulaInfo.h"

void ScriptFormulaInfo::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&tFormula, base, current);
  ptr += 0x20;
}
