/**
 * Definition: LabelRule
 * Hash: 8518cc78
 */

#include "LabelRule.h"

void LabelRule::read(const char* base, char* &ptr) {
  readData(&szRuleName, base, ptr);
  readData(&nNumToChoose, base, ptr);
  readData(&arEntries, base, ptr);
}
