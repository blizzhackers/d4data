/**
 * Definition: LabelRule
 * Hash: 8518cc78
 */

#include "LabelRule.h"

void LabelRule::read(const char* base, char* &ptr) {
  char *current;
  current = ptr + 0x0;
  readData(&szRuleName, base, current);
  current = ptr + 0x80;
  readData(&nNumToChoose, base, current);
  current = ptr + 0x88;
  readData(&arEntries, base, current);
  ptr += 0x98;
}
